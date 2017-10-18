//
//  TodayViewController.m
//  DemoExtension
//
//  Created by woody on 2017/9/28.
//

#import "TodayViewController.h"
#import <NotificationCenter/NotificationCenter.h>

@interface TodayViewController () <NCWidgetProviding>

@end

@implementation TodayViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.    
    
    if([[UIDevice currentDevice] .systemVersion integerValue] >= 10)
    {
        self.extensionContext.widgetLargestAvailableDisplayMode = NCWidgetDisplayModeExpanded;
    }
    
    return;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)widgetPerformUpdateWithCompletionHandler:(void (^)(NCUpdateResult))completionHandler
{
    // Perform any setup necessary in order to update the view.
    
    // If an error is encountered, use NCUpdateResultFailed
    // If there's no update required, use NCUpdateResultNoData
    // If there's an update, use NCUpdateResultNewData

    completionHandler(NCUpdateResultNewData);
}

- (void) widgetActiveDisplayModeDidChange:(NCWidgetDisplayMode)activeDisplayMode withMaximumSize:(CGSize)maxSize
{
    if(activeDisplayMode == NCWidgetDisplayModeCompact)
    {
        self.preferredContentSize = CGSizeMake([UIScreen mainScreen].bounds.size.width, 110);
    }
    else
    {
        self.preferredContentSize = CGSizeMake([UIScreen mainScreen].bounds.size.width, 200);
//        self.preferredContentSize = CGSizeMake([UIScreen mainScreen].bounds.size.width, MAXFLOAT);
    }
    
    return;
}

- (IBAction)GridChart:(id)sender
{
    NSUserDefaults *userDefault = [[NSUserDefaults alloc]initWithSuiteName:@"group.com.shandagames.Unity3DTouch"];
    [userDefault setValue:@"WoodyPlus 上线了！" forKey:@"gridChart"];
    
    return;
}

- (IBAction)RandomChart:(id)sender
{
    [self.extensionContext openURL:[NSURL URLWithString:@"sdgExtension://randomchart"] completionHandler:nil];
}

- (IBAction)AuctionHouse:(id)sender
{
    [self.extensionContext openURL:[NSURL URLWithString:@"sdgExtension://auctionHouse"] completionHandler:nil];
}

- (IBAction)RefreshActive:(id)sender
{
    [self.extensionContext openURL:[NSURL URLWithString:@"sdgExtension://refreshActive"] completionHandler:nil];
}

- (IBAction)unwindSegue:(UIStoryboardSegue *)sender
{
    NSLog(@"unwindSegue %@", sender);
}

@end
