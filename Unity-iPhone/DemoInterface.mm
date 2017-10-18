//
//  DemoInterface.m
//  Unity-iPhone
//
//  Created by woody on 2017/9/29.
//

#import "DemoInterface.h"
#import "UnityAppController.h"

static DemoInner *sharedDemo = nil;

@implementation DemoInner

- (id) init
{
    self = [super init];
    [self ClearAll];
    return self;
}

- (void) dealloc
{
    [self ClearAll];
//    [super dealloc];   // as far as I know, after iOS SDK 5.0, we cannot manual add this, and the compiler will append it automatically.
}

+ (DemoInner *) sharedDemo
{
    if (!sharedDemo)
    {
        sharedDemo = [[DemoInner alloc] init];
        [[DemoInner sharedDemo] ClearAll];
    }
    return sharedDemo;
}

- (void) DeleteLocalData:(NSString *)i_key i_userDefault:(NSUserDefaults *)i_userDefault;
{
    if(nil == i_userDefault)
    {
        i_userDefault = [[NSUserDefaults alloc]initWithSuiteName:@"group.com.shandagames.Unity3DTouch"];
    }
    [i_userDefault removeObjectForKey:i_key];
    [i_userDefault synchronize];
    return;
}

- (void) ClearAll
{
    NSUserDefaults* userDefault = [[NSUserDefaults alloc]initWithSuiteName:@"group.com.shandagames.Unity3DTouch"];
    NSDictionary* dict = [userDefault dictionaryRepresentation];
    
    for(NSString* key in [dict allKeys])
    {
        if(NSOrderedSame != [key compare:@"FlappyBirdHighScore"])
        {
            [self DeleteLocalData:key i_userDefault:userDefault];
        }
    }
    return;
}

- (void) SaveLocalData:(NSString *)i_key i_value:(NSString *)i_value
{
    NSUserDefaults *userDefault = [[NSUserDefaults alloc]initWithSuiteName:@"group.com.shandagames.Unity3DTouch"];
    [userDefault setValue:i_value forKey:i_key];
    return;
}

- (NSString *) LoadLocalData:(NSString *)i_key
{
    NSUserDefaults *userDefault = [[NSUserDefaults alloc]initWithSuiteName:@"group.com.shandagames.Unity3DTouch"];
    return [userDefault valueForKey:i_key];
}

- (BOOL) CallUnity:(NSString *)i_gameObject i_methodName:(NSString *)i_methodName i_param:(NSString *)i_param i_unity:(BOOL)i_unity
{
    if(nil != i_methodName)
    {
        if(i_unity)
        {
            NSLog(@"Unity loaded..");
            if(nil == i_gameObject)
            {
                i_gameObject = @"UnityInterface";
            }
            if(nil == i_param)
            {
                i_param = @"";
            }
            UnitySendMessage([i_gameObject UTF8String], [i_methodName UTF8String], [i_param UTF8String]);
        }
        else
        {
            NSLog(@"Unity loaded delay.. set temp data");
            [self SaveLocalData:@"UnityGameObject" i_value:i_gameObject];
            [self SaveLocalData:@"UnityMethod" i_value:i_methodName];
            [self SaveLocalData:@"UnityParam" i_value:i_param];
        }
        return TRUE;
    }
    
    return FALSE;
}
@end

