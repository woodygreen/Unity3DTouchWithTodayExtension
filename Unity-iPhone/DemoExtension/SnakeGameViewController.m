//
//  SnakeGameViewController.m
//  DemoExtension
//
//  Created by woody on 2017/10/12.
//

#import "SnakeGameViewController.h"

@implementation SnakeGameViewController

- (void) viewDidLoad
{
    [super viewDidLoad];
    [self initGame];
    
    return;
}

- (void) didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    
    return;
}

- (void) initGame
{
    UIView * leftFrame = [[UIView alloc] initWithFrame:CGRectMake(ks_gameViewLeft, ks_gameViewTop, 1, ks_gameViewHeight)];
    leftFrame.backgroundColor = [UIColor yellowColor];
    [self.view addSubview:leftFrame];
    
    UIView * rightFrame = [[UIView alloc] initWithFrame:CGRectMake(ks_gameViewRight, ks_gameViewTop, 1, ks_gameViewHeight)];
    rightFrame.backgroundColor = [UIColor yellowColor];
    [self.view addSubview:rightFrame];
    
    UIView * upFrame = [[UIView alloc] initWithFrame:CGRectMake(ks_gameViewLeft, ks_gameViewTop, ks_gameViewWidth, 1)];
    upFrame.backgroundColor = [UIColor yellowColor];
    [self.view addSubview:upFrame];
    
    UIView * bottomFrame = [[UIView alloc] initWithFrame:CGRectMake(ks_gameViewLeft, ks_gameViewBottom, ks_gameViewWidth, 1)];
    bottomFrame.backgroundColor = [UIColor yellowColor];
    [self.view addSubview:bottomFrame];
    [self AddStartButton:@"开始" ];
    
    return;
}

- (void) AddStartButton:(NSString *)buttonName
{
    UIButton* startButton = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    startButton.frame = CGRectMake(ks_gameViewLeft, ks_gameViewTop, ks_gameViewRight - ks_gameViewLeft, ks_gameViewBottom - ks_gameViewTop);
    [startButton setTitle:buttonName forState:UIControlStateNormal];
    self._startButton = startButton;
    
    SEL eventHandler = @selector(StartGame);
    
    [startButton addTarget:self action:eventHandler forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:startButton];
    
    return;
}

- (void) GameOver
{
    [self._timer invalidate];
    [self ClearGameObjects];
    [self AddStartButton:@"重新开始"];
    return;
}

- (void) ClearGameObjects
{
    for (UIView * body in self._snake)
    {
        [body removeFromSuperview];
    }
    for (UIView * food in self._foods)
    {
        [food removeFromSuperview];
    }
    
    return;
}

- (void) StartGame
{
    [self ClearGameObjects];
    
    self._direction = none;
    self._moving = NO;
    self._moveX = 0;
    self._moveY = 0;
    self._snake = [NSMutableArray array];
    self._foods = [NSMutableArray array];
    
    for(NSInteger i = 0; i < 3; i++)
    {
        UIView * body = [[UIView alloc] initWithFrame:CGRectMake(ks_startX - i * ks_gridWidth, ks_startY, ks_gridWidth, ks_gridHeight)];
        if(0 == i)
        {
            body.backgroundColor = [UIColor redColor];
            self._head = body;
        }
        else
        {
            body.backgroundColor = [UIColor blueColor];
        }
        [self.view addSubview:body];
        [self._snake insertObject:body atIndex:i];
    }
    
    self._timer = [NSTimer scheduledTimerWithTimeInterval:0.2 target:self selector:@selector(Refresh) userInfo:nil repeats:YES];
    [self._startButton removeFromSuperview];
    [self moveRight:nil];
    
    return;
}

- (BOOL) IsInSnakeBody:(CGRect)position
{
    for(UIView * body in self._snake)
    {
        if(CGRectIntersectsRect(body.frame, position))
        {
            return YES;
        }
    }
    
    return NO;
}

- (UIView *) GenerateFood
{
    UIView * food = nil;
    
    CGRect foodPos = CGRectMake((arc4random() % 23) * ks_gridWidth + 130, (arc4random() % 17) * ks_gridHeight + 20, ks_gridWidth, ks_gridHeight);
    while([self IsInSnakeBody:foodPos])
    {
        foodPos = CGRectMake((arc4random() % 23) * ks_gridWidth + 130, (arc4random() % 17) * ks_gridHeight + 20, ks_gridWidth, ks_gridHeight);
    }
    food = [[UIView alloc] initWithFrame:foodPos];
    food.backgroundColor = [UIColor greenColor];
    [self._foods addObject:food];
    [self.view addSubview:food];
    
    return food;
}

- (void) RefreshFood
{
    // create food
    UIView * food = nil;
    
    if(0 == self._foods.count)
    {
        food = [self GenerateFood];
    }
    else
    {
        food = self._foods[0];
    }
    
    // eat
    if(CGRectIntersectsRect(self._head.frame, food.frame))
    {
        food.backgroundColor = [UIColor blueColor];
        [self._snake insertObject:food atIndex:self._snake.count];
        [self._foods removeAllObjects];
        for(UIView * body in self._snake)
        {
            [self.view addSubview:body];
        }
    }
    
    return;
}

- (IBAction)moveUp:(id)sender
{
    if(down == self._direction)
    {
        return;
    }
    
    self._moving = YES;
    self._direction = up;
    self._moveX = 0;
    self._moveY = -ks_gridHeight;
    
    return;
}

- (IBAction)moveDown:(id)sender
{
    if(up == self._direction || self._moving)
    {
        return;
    }
    
    self._moving = YES;
    self._direction = down;
    self._moveX = 0;
    self._moveY = ks_gridHeight;
    
    return;
}

- (IBAction)moveLeft:(id)sender
{
    if(right == self._direction || self._moving)
    {
        return;
    }
    
    self._moving = YES;
    self._direction = left;
    self._moveX = -ks_gridWidth;
    self._moveY = 0;
    
    return;
}

- (IBAction)moveRight:(id)sender
{
    if(left == self._direction || self._moving)
    {
        return;
    }
    
    self._moving = YES;
    self._direction = right;
    self._moveX = ks_gridWidth;
    self._moveY = 0;
    
    return;
}

- (BOOL) RefreshHead
{
    CGPoint newHeadPos = CGPointMake(self._head.center.x + self._moveX, self._head.center.y + self._moveY);
    self._moving = NO;
    if(newHeadPos.x < ks_gameViewLeft || newHeadPos.x > ks_gameViewRight || newHeadPos.y < ks_gameViewTop || newHeadPos.y > ks_gameViewBottom)
    {
        return NO;
    }
    for(NSInteger i = 1; i < self._snake.count; i++)
    {
        UIView * body = self._snake[i];
        if(CGRectIntersectsRect(self._head.frame, body.frame))
        {
            return NO;
        }
    }
    
    self._frontPos = self._head.center;
    self._head.center = newHeadPos;
    
    return YES;
}

- (void) Refresh
{
    if(0 == self._moveX  && 0 == self._moveY)
    {
        return;
    }
    
    BOOL alive = [self RefreshHead];
    [self RefreshFood];
    
    for(NSInteger i = 1; i < self._snake.count; i++)
    {
        UIView * body = self._snake[i];
        CGPoint oldPos = body.center;
        body.center = self._frontPos;
        self._frontPos = oldPos;
    }
    
    if(!alive)
    {
        [self GameOver];
    }
    
    return;
}


@end
