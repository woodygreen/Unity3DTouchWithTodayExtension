//
//  DemoInterface.h
//  Unity-iPhone
//
//  Created by woody on 2017/9/29.
//

#ifndef DemoInterface_h
#define DemoInterface_h

@interface DemoInner : NSObject
+ (DemoInner *) sharedDemo;
- (void) ClearAll;
- (void) DeleteLocalData:(NSString *)i_key i_userDefault:(NSUserDefaults *)i_userDefault;
- (void) SaveLocalData:(NSString *)i_key i_value:(NSString *)i_value;
- (NSString *) LoadLocalData:(NSString *)i_key;
- (BOOL) CallUnity:(NSString *)i_gameObject i_methodName:(NSString *)i_methodName i_param:(NSString *)i_param i_unity:(BOOL)i_unity;
@end

#endif /* DemoInterface.h */
