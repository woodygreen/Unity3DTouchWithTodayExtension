using UnityEngine;
using System.Collections;
using System.IO;
#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
#endif

public class XCodeBuildProcessor : Editor 
{
	[PostProcessBuild (999)]
	public static void OnPostProcessBuild(BuildTarget buildTarget, string path)
	{
		if (BuildTarget.iOS == buildTarget) 
		{
			//EditProject (path);
			EditPList (path);
		}
	}

	private static void EditProject (string path)
	{

		string projectPath = PBXProject.GetPBXProjectPath (path);

		PBXProject pbxProject = new PBXProject ();
		pbxProject.ReadFromFile (projectPath);

		// if you want to set your project of (maybe not for 3DTouch) here, like some framework reference.
		// here I can give you some example.
		string target = pbxProject.TargetGuidByName (PBXProject.GetUnityTargetName ());

		pbxProject.SetBuildProperty (target, "ENABLE_BITCODE", "NO");
		pbxProject.AddBuildProperty (target, "OTHER_LDFLAGS", "-ObjC");

		pbxProject.AddFrameworkToProject (target, "EventKit.framework", false);
		pbxProject.AddFrameworkToProject (target, "libz.1.dylib", false);

		pbxProject.WriteToFile (projectPath);
	}

	private static void EditPList(string path)
	{
		string plistPath = path + "/Info.plist";

		PlistDocument plist = new PlistDocument ();
		plist.ReadFromString (File.ReadAllText (plistPath));
		PlistElementDict rootDict = plist.root;

		PlistElementArray shortcutItems = rootDict.CreateArray ("UIApplicationShortcutItems");
		{
			PlistElementDict item0 = shortcutItems.AddDict ();
			{
				item0.SetString ("UIApplicationShortcutItemIconType", "UIApplicationShortcutIconTypeUpdate");
				item0.SetString ("UIApplicationShortcutItemTitle", "查看更新");
				item0.SetString ("UIApplicationShortcutItemSubtitle", "当前版本号 v0.0.1.0");
				item0.SetString ("UIApplicationShortcutItemType", "com.shandagames.Demo3DTouch.Update");
				PlistElementDict userInfo = item0.CreateDict ("UIApplicationShortcutItemUserInfo");
				{
					userInfo.SetString ("UnityGameObject", "UnityInterface");
					userInfo.SetString ("UnityMethod", "VisitWebsite");
					userInfo.SetString ("UnityParam", "https://itunes.apple.com/cn/app/%E7%A5%9E%E6%97%A0%E6%9C%88-%E4%B8%8E%E5%88%9D%E9%9F%B3%E6%9C%AA%E6%9D%A5%E4%B8%80%E8%B5%B7%E5%86%92%E9%99%A9%E5%90%A7/id1248272294?mt=8");
				}
			}

			PlistElementDict item1 = shortcutItems.AddDict ();
			{
				item1.SetString ("UIApplicationShortcutItemIconType", "UIApplicationShortcutIconTypeShare");
				item1.SetString ("UIApplicationShortcutItemTitle", "分享游戏");
				item1.SetString ("UIApplicationShortcutItemSubtitle", "与好友一起享受快乐");
				item1.SetString ("UIApplicationShortcutItemType", "com.shandagames.Demo3DTouch.Share");
				PlistElementDict userInfo = item1.CreateDict ("UIApplicationShortcutItemUserInfo");
				{
					userInfo.SetString ("UnityGameObject", "UnityInterface");
					userInfo.SetString ("UnityMethod", "ShareGame");
					userInfo.SetString ("UnityParam", "123");
				}
			}

			PlistElementDict item2 = shortcutItems.AddDict ();
			{
				item2.SetString ("UIApplicationShortcutItemIconType", "UIApplicationShortcutIconTypePlay");
				item2.SetString ("UIApplicationShortcutItemTitle", "快速游戏");
				item2.SetString ("UIApplicationShortcutItemSubtitle", "与其他玩家一较高下");
				item2.SetString ("UIApplicationShortcutItemType", "com.shandagames.Demo3DTouch.Play");
				PlistElementDict userInfo = item2.CreateDict ("UIApplicationShortcutItemUserInfo");
				{
					userInfo.SetString ("UnityGameObject", "UnityInterface");
					userInfo.SetString ("UnityMethod", "LoadScene");
					userInfo.SetString ("UnityParam", "QuickGame");
				}
			}

			PlistElementDict item3 = shortcutItems.AddDict ();
			{
				item3.SetString ("UIApplicationShortcutItemIconType", "UIApplicationShortcutIconTypeHome");
				item3.SetString ("UIApplicationShortcutItemTitle", "打开游戏官网");
				item3.SetString ("UIApplicationShortcutItemSubtitle", "moon.sdo.com");
				item3.SetString ("UIApplicationShortcutItemType", "com.shandagames.Demo3DTouch.Home");
				PlistElementDict userInfo = item3.CreateDict ("UIApplicationShortcutItemUserInfo");
				{
					userInfo.SetString ("UnityGameObject", "UnityInterface");
					userInfo.SetString ("UnityMethod", "VisitWebsite");
					userInfo.SetString ("UnityParam", "http://moon.sdo.com/");
				}
			}
		}

		var urlTypes = rootDict.CreateArray ("CFBundleURLTypes");
		var urlDict = urlTypes.AddDict ();
		urlDict.SetString ("CFBundleTypeRole", "Editor");
		var urlInnerArray = urlDict.CreateArray ("CFBundleURLSchemes");
		urlInnerArray.AddString ("sdgExtension");

		File.WriteAllText (plistPath, plist.WriteToString ());
	}
}
