//
//  BirdGameViewController.h
//  DemoExtension
//
//  Created by woody on 2017/10/13.
//

#define stepUp 3
#define maxUp 50

#define k_pipeInterval 80

#define kb_gameViewLeft 80
#define kb_gameViewRight 390
#define kb_gameViewTop 0
#define kb_gameViewBottom 200
#define kb_gameViewWidth 310
#define kb_gameViewHeight 200

#define k_titleH 25
#define k_titleW 100
#define k_titleY 60

#define k_startButtonH 30
#define k_startButtonW 60
#define k_startButtonY 150

#define k_jumpButtonX 15
#define k_jumpButtonY 5
#define k_jumpButtonW 55
#define k_jumpButtonH 185

#define k_roadTop 170
#define k_roadHeight 30

#define k_birdStartX 140
#define k_birdStartY 40
#define k_birdWidth 28
#define k_birdHeight 21

#define k_scoreBoardX kb_gameViewLeft
#define k_scoreBoardY 20
#define k_scoreBoardW kb_gameViewWidth
#define k_scoreBoardH 100

@interface BirdGameViewController : UIViewController

enum direction { none = 0, up = 1, down, left, right};

@property (nonatomic, strong) NSMutableArray * _title;
@property (nonatomic, strong) NSMutableArray * _game;
@property (nonatomic, strong) UIButton * _startButton;
@property (nonatomic, strong) UIButton * _jumpButton;
@property (nonatomic, strong) UIImageView * _topView;
@property (nonatomic, strong) UIImageView * _roadView;
@property (nonatomic, strong) UIImageView * _birdsView;
@property (nonatomic, strong) UIImageView * _gameOver;
@property (nonatomic, strong) UIView * _leftPanel;
@property (nonatomic, strong) UIView * _rightPanel;
@property (nonatomic, strong) UIView * _pipeHidingPanel;
@property (nonatomic, strong) UIImageView * _topPipe;
@property (nonatomic, strong) UIImageView * _bottomPipe;
@property (nonatomic, strong) UILabel * _scoreLabel;
@property (nonatomic, strong) NSTimer * _timer;
@property (nonatomic, assign) NSInteger _gravity;
@property (nonatomic, assign) NSInteger _score;
@property (nonatomic, assign) BOOL _taping;

@end

