//
//  BirdGameViewController.m
//  DemoExtension
//
//  Created by woody on 2017/10/13.
//

#import "BirdGameViewController.h"
#import "TodayViewController.h"

@implementation BirdGameViewController

- (void) viewDidLoad
{
    [super viewDidLoad];
    [self ShowTitle];
    
    return;
}

- (void) didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    
    return;
}

- (void) ShowTitle
{
    self._title = [NSMutableArray array];
    
    UIImageView * bgView = [[UIImageView alloc] initWithFrame:CGRectMake(kb_gameViewLeft, kb_gameViewTop, kb_gameViewWidth, kb_gameViewHeight)];
    bgView.image = [UIImage imageNamed:@"bg"];
    [self.view addSubview:bgView];
    [self._title addObject:bgView];
    
    CGFloat titleX = kb_gameViewLeft + (kb_gameViewWidth - k_titleW) / 2;
    UIImageView * titleView = [[UIImageView alloc]initWithFrame:CGRectMake(titleX, k_titleY, k_titleW, k_titleH)];
    titleView.image = [UIImage imageNamed:@"title"];
    [self.view addSubview:titleView];
    [self._title addObject:titleView];
    
    CGFloat startButtonX = kb_gameViewLeft + (kb_gameViewWidth - k_startButtonW) / 2;
    UIButton * startButton = [UIButton buttonWithType:UIButtonTypeCustom];
    startButton.frame = CGRectMake(startButtonX, k_startButtonY, k_startButtonW, k_startButtonH);
    [startButton setImage:[UIImage imageNamed:@"start"] forState:UIControlStateNormal];
    SEL startEvent = @selector(StartGame);
    [startButton addTarget:self action:startEvent forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:startButton];
    [self._title addObject:startButton];
    
    return;
}

- (void) ClearTitle
{
    for(UIView * titleView in self._title)
    {
        [titleView removeFromSuperview];
    }
    [self._title removeAllObjects];
    
    return;
}

- (IBAction)BackToMain:(id)sender
{
    [self ClearTitle];
    [self ClearGameOver];
    
    return;
}

- (void) StartGame
{
    [self ClearTitle];
    [self GenerateGame];
    
    return;
}

- (void) RestartGame
{
    [self ClearGameOver];
    [self GenerateGame];
    
    return;
}

- (void) saveSharedData:(NSString *) key value:(NSString *) value
{
    NSUserDefaults *userDefault = [[NSUserDefaults alloc]initWithSuiteName:@"group.com.shandagames.Unity3DTouch"];
    [userDefault setValue:value forKey:key];
    
    return;
}

- (NSString *) getSharedData:(NSString *)key
{
    NSUserDefaults *userDefault = [[NSUserDefaults alloc]initWithSuiteName:@"group.com.shandagames.Unity3DTouch"];
    return [userDefault valueForKey:key];
}

- (void) GameOver
{
    [self RemoveUselessPipes];
    [self._timer invalidate];
    [self._jumpButton removeFromSuperview];
    [self._leftPanel removeFromSuperview];
    
    CGFloat gameOverX = kb_gameViewLeft + (kb_gameViewWidth - k_titleW) / 2;
    UIImageView * gameOver = [[UIImageView alloc]initWithFrame:CGRectMake(gameOverX, k_titleY - 10, k_titleW, k_titleH)];
    gameOver.image = [UIImage imageNamed:@"gameover"];
    [self.view addSubview:gameOver];
    [self._game addObject:gameOver];
    
    CGFloat startButtonX = kb_gameViewLeft + (kb_gameViewWidth - k_startButtonW) / 2;
    UIButton * startButton = [UIButton buttonWithType:UIButtonTypeCustom];
    startButton.frame = CGRectMake(startButtonX, k_startButtonY, k_startButtonW, k_startButtonH);
    [startButton setImage:[UIImage imageNamed:@"restart"] forState:UIControlStateNormal];
    SEL startEvent = @selector(RestartGame);
    [startButton addTarget:self action:startEvent forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:startButton];
    [self._game addObject:startButton];
    
    NSString * score = [self getSharedData:@"FlappyBirdHighScore"];
    if(nil == score)
    {
        score = @"0";
    }
    NSInteger highestScore = [score integerValue];

    if(self._score > highestScore)
    {
        NSString * newHighScore = [NSString stringWithFormat:@"%ld", self._score];
        [self saveSharedData:@"FlappyBirdHighScore" value:newHighScore];
    }
    
    return;
}

- (void) ClearGameOver
{
    [self ClearGame];
    
    return;
}

- (void) GenerateGame
{
    self._game = [NSMutableArray array];
    self._taping = NO;
    self._gravity = 0;
    self._score = 0;
    
    self._leftPanel = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 80, 200)];
    self._leftPanel.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self._leftPanel];
    [self._game addObject:self._leftPanel];
    
    self._rightPanel = [[UIView alloc] initWithFrame:CGRectMake(390, 0, 80, 200)];
    self._rightPanel.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self._rightPanel];
    [self._game addObject:self._rightPanel];
    
    self._pipeHidingPanel = [[UIView alloc] initWithFrame:CGRectMake(0, k_roadTop, 80, 200)];
    self._pipeHidingPanel.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self._pipeHidingPanel];
    [self._game addObject:self._pipeHidingPanel];
    
    
    UIImageView * bgView = [[UIImageView alloc]initWithFrame:CGRectMake(kb_gameViewLeft, kb_gameViewTop, kb_gameViewWidth, kb_gameViewHeight)];
    bgView.image = [UIImage imageNamed:@"night"];
    [self.view addSubview:bgView];
    [self._game addObject:bgView];
    
    self._topView = [[UIImageView alloc]initWithFrame:CGRectMake(kb_gameViewLeft, kb_gameViewTop, kb_gameViewWidth, 1)];
    [self.view addSubview:self._topView];
    [self._game addObject:self._topView];
    
    self._roadView = [[UIImageView alloc]initWithFrame:CGRectMake(kb_gameViewLeft, k_roadTop, kb_gameViewWidth * 1.1, k_roadHeight)];
    self._roadView.image = [UIImage imageNamed:@"road"];
    [self.view addSubview:self._roadView];
    [self._game addObject:self._roadView];
    
    self._jumpButton = [UIButton buttonWithType:UIButtonTypeCustom];
    self._jumpButton.frame = CGRectMake(k_jumpButtonX, k_jumpButtonY, k_jumpButtonW, k_jumpButtonH);
    [self._jumpButton setImage:[UIImage imageNamed:@"jump"] forState:UIControlStateNormal];
    SEL eventHandler = @selector(Jump);
    [self._jumpButton addTarget:self action:eventHandler forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:self._jumpButton];
    [self._game addObject:self._jumpButton];
    
    NSMutableArray * birds = [[NSMutableArray alloc]init];
    for (NSInteger i = 0; i < 3; i++)
    {
        NSString *name = [NSString stringWithFormat:@"bird%zi", i];
        UIImage *bird = [UIImage imageNamed:name];
        [birds addObject:bird];
    }
    self._birdsView = [[UIImageView alloc]initWithFrame:CGRectMake(k_birdStartX, k_birdStartY, k_birdWidth, k_birdHeight)];
    self._birdsView.animationDuration = 1;
    self._birdsView.animationImages = birds;
    self._birdsView.animationRepeatCount = 0;
    [self._birdsView startAnimating];
    [self.view addSubview:self._birdsView];
    [self._game addObject:self._birdsView];
    
    [self GeneratePipe];
    
    self._timer = [NSTimer scheduledTimerWithTimeInterval:0.01 target:self selector:@selector(Update) userInfo:nil repeats:YES];
    self._scoreLabel = [[UILabel alloc]initWithFrame:CGRectMake(k_scoreBoardX, k_scoreBoardY, k_scoreBoardW, k_scoreBoardH)];
    self._scoreLabel.text = [NSString stringWithFormat:@"%zi", self._score];
    self._scoreLabel.textAlignment = NSTextAlignmentCenter;
    self._scoreLabel.font = [UIFont fontWithName:@"Marker Felt" size:100];
    self._scoreLabel.textColor = [UIColor colorWithRed:0.8 green:0.9 blue:0.5 alpha:0.8];
    [self.view addSubview:self._scoreLabel];
    [self.view insertSubview:self._scoreLabel atIndex:2];
    [self._game addObject:self._scoreLabel];
    
    return;
}

- (void) ClearGame
{
    for(UIView * gameObject in self._game)
    {
        [gameObject removeFromSuperview];
    }
    [self._game removeAllObjects];
    
    return;
}

- (void) GeneratePipe
{
    NSInteger pipeY = arc4random() % 50 + 20;
    
    UIImageView * topPipe = [[UIImageView alloc]initWithFrame:CGRectMake(400, pipeY - 200, 30, 200)];
    topPipe.image = [UIImage imageNamed:@"pipe"];
    [self.view addSubview:topPipe];
    [self._game addObject:topPipe];
    
    UIImageView * bottomPipe = [[UIImageView alloc]initWithFrame:CGRectMake(400, pipeY + k_pipeInterval, 30, 200)];
    bottomPipe.image = [UIImage imageNamed:@"pipe"];
    [self.view addSubview:bottomPipe];
    [self._game addObject:bottomPipe];
    
    // the sort here, cannot be changed, they are the layers' relationship.
    [self.view insertSubview:self._leftPanel aboveSubview:topPipe];
    [self.view insertSubview:self._leftPanel aboveSubview:bottomPipe];
    [self.view insertSubview:self._rightPanel aboveSubview:topPipe];
    [self.view insertSubview:self._rightPanel aboveSubview:bottomPipe];
    
    [self.view insertSubview:self._roadView aboveSubview:bottomPipe];
    
    [self.view insertSubview:self._leftPanel aboveSubview:self._roadView];
    [self.view insertSubview:self._rightPanel aboveSubview:self._roadView];
    [self.view insertSubview:self._pipeHidingPanel aboveSubview:self._roadView];
    
    [self.view insertSubview:self._jumpButton aboveSubview:self._pipeHidingPanel];
    [self.view insertSubview:self._jumpButton aboveSubview:self._leftPanel];
    
    self._topPipe = topPipe;
    self._bottomPipe = bottomPipe;
    
    
    return;
}

- (void) RemoveUselessPipes
{
    if(self._topPipe.frame.origin.x < kb_gameViewLeft + 30)
    {
        [self._topPipe removeFromSuperview];
        [self._bottomPipe removeFromSuperview];
    }
    
    return;
}

- (void) Jump
{
    self._taping = YES;
    
    return;
}

- (void) Update
{
    // road move
    CGRect frame = self._roadView.frame;
    if (frame.origin.x <= kb_gameViewLeft - 15)
    {
        frame.origin.x = kb_gameViewLeft;
    }
    frame.origin.x--;
    self._roadView.frame = frame;
    
    // raising
    if (self._taping == YES)
    {
        CGRect frame = self._birdsView.frame;
        frame.origin.y -= stepUp;
        self._gravity += stepUp;
        self._birdsView.frame = frame;
        if (self._gravity >= maxUp)
        {
            self._taping = NO;
        }
    }
    // declining
    else
    {
        CGRect frame = self._birdsView.frame;
        frame.origin.y++;
        self._gravity -= 1;
        self._birdsView.frame = frame;
        self._gravity = 0;
    }
    
    // update the pipes
    CGRect topPipeFrame = self._topPipe.frame;
    CGRect bottomPipeFrame = self._bottomPipe.frame;
    topPipeFrame.origin.x--;
    bottomPipeFrame.origin.x--;
    self._topPipe.frame = topPipeFrame;
    self._bottomPipe.frame = bottomPipeFrame;
    if (topPipeFrame.origin.x < (kb_gameViewLeft - 40))
    {
        [self RemoveUselessPipes];
        [self GeneratePipe];
    }
    
    // calculate the collide
    if (CGRectIntersectsRect(self._birdsView.frame, self._topPipe.frame) ||
        (CGRectIntersectsRect(self._birdsView.frame, self._bottomPipe.frame)) ||
        (CGRectIntersectsRect(self._birdsView.frame, self._roadView.frame)) ||
        (CGRectIntersectsRect(self._birdsView.frame, self._topView.frame)))
    {
        [self GameOver];
        return;
    }
    
    // update score
    if (topPipeFrame.origin.x == (k_birdStartX - 30))
    {
        [self UpdateScore];
    }
    
    return;
}

- (void) UpdateScore
{
    if (self._topPipe.frame.origin.x == (k_birdStartX - 30))
    {
        self._score++;
        self._scoreLabel.text = [NSString stringWithFormat:@"%zi", self._score];
    }
    
    return;
}

@end
