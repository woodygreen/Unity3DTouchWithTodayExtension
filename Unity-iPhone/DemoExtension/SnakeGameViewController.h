//
//  SnakeGameViewController.h
//  DemoExtension
//
//  Created by woody on 2017/10/12.
//

#define ks_gameViewLeft 120
#define ks_gameViewRight 380
#define ks_gameViewTop 10
#define ks_gameViewBottom 190
#define ks_gameViewWidth 260
#define ks_gameViewHeight 180
#define ks_gridWidth 10
#define ks_gridHeight 10

#define ks_startX 200
#define ks_startY 130

@interface SnakeGameViewController : UIViewController

enum direction { none = 0, up = 1, down, left, right};

@property (nonatomic, strong) NSMutableArray * _foods;
@property (nonatomic, strong) NSMutableArray * _snake;
@property (nonatomic, strong) UIView * _head;
@property (nonatomic, strong) UIButton * _startButton;

@property (nonatomic) CGPoint _frontPos;
@property (nonatomic, strong) NSTimer * _timer;
@property (nonatomic, assign) NSInteger _moveX;
@property (nonatomic, assign) NSInteger _moveY;
@property (nonatomic, assign) BOOL _moving;
@property (nonatomic, assign) enum direction _direction;

@end

