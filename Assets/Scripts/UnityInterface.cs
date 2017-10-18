using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Runtime.InteropServices;
using System.Collections;
using System;
using System.Reflection;

public class UnityInterface : MonoBehaviour 
{
	private bool showHint = false;
	private float showingTime = 0.0f;
	private float showingDuration = 0.0f;
	private Action actionAfterShown = null;
	private float timerRefresh = 0.0f;

	// private float screenW = 0.0f;
	// private float screenH = 0.0f;

	private Text hintText;

	void Start()
	{
#if UNITY_EDITOR
		showHint = false;
#endif
		// screenH = Screen.height;
		// screenW = Screen.width;

		timerRefresh = 0;

		hintText = GameObject.Find ("Canvas/HintText").GetComponent<Text> ();
		hintText.text = "";

		FinishedUnityInterfaceStarting ();

		return;
	}

	void Update()
	{
		UpdateChartRoom ();

		return;
	}

	void FixedUpdate()
	{
		timerRefresh = timerRefresh + Time.deltaTime;
		if (timerRefresh > 1.0f) 
		{
			timerRefresh = 0;
			Debug.Log ("Alive");
		}

		if (showHint) 
		{
			showingTime = showingTime + Time.deltaTime;

			if (showingTime > showingDuration) 
			{
				hintText.text = "";
				showHint = false;

				if (null != actionAfterShown) 
				{
					actionAfterShown ();
					actionAfterShown = null;
				}
			}
		}

		return;
	}

	void UpdateChartRoom()
	{
		GameObject chartTextObject = GameObject.Find ("Canvas/ChartText");
		if (null != chartTextObject) 
		{
			Text chartText = chartTextObject.GetComponent<Text> ();
			chartText.text = ChartRoom.GetInstance ().GetChartText ();
		}

		return;
	}

	private void ShowHintText(string hint, float duration, Action action = null)
	{
		actionAfterShown = action;
		hintText.text = hint;
		showHint = true;
		showingTime = 0.0f;
		showingDuration = duration;
		AddChart (hint);

		return;
	}

	public void LoadMainMenu()
	{
		ShowHintText ("回到主界面", 0.3f, DoLoadMainMenu);

		return;
	}

	private void DoLoadMainMenu()
	{
		LoadScene ("Init");		

		return;
	}

	public void LoadChartRoom()
	{
		ShowHintText ("正在进入公会聊天频道", 0.3f, DoLoadChartRoom);

		return;
	}

	public void LoadChartRoom(string param)
	{
		ShowHintText (param, 0.1f, DoLoadChartRoom);

		return;
	}

	private void DoLoadChartRoom()
	{
		LoadScene ("ChartRoom");	

		return;	
	}

	public void LoadQuickGame()
	{
		ShowHintText ("开始快速游戏", 0.3f, DoLoadQuickGame);

		return;
	}

	private void DoLoadQuickGame()
	{
		LoadScene ("QuickGame");	

		return;	
	}

	public void LoadFreeRun()
	{
		ShowHintText ("开始自由模式", 0.3f, DoLoadFreeRun);

		return;
	}

	private void DoLoadFreeRun()
	{
		LoadScene ("FreeRun");	

		return;	
	}

	public void ClearChart()
	{
		ChartRoom.GetInstance ().ClearChartText ();

		return;
	}

	// for 3D Touch
	public void LoadScene(string param)
	{
		SceneManager.LoadScene (param);

		return;
	}

	public void AddChart(string param)
	{
		ChartRoom.GetInstance ().AppendChartText (param);

		return;
	}

	public void ShareGame(string param) 
	{
		ShowHintText ("已分享给好友", 1.0f);

		return;
	}

	public void ThumbUp(string param)
	{
		ShowHintText ("已完成点赞", 1.0f);	

		return;	
	}

	public void VisitWebsite(string param)
	{
		AddChart ("打开网址" + param);
		Application.OpenURL (param);

		return;
	}

	// for Today Extensions
	public void GridChart(string param)
	{
		LoadChartRoom (param);

		return;
	}

	public void ActiveTimer(string param)
	{
		ShowHintText ("打开活动界面", 1.0f);

		return;
	}

	public void WeeklySign(string param)
	{
		ShowHintText ("进入七日签到", 1.0f);

		return;
	}

	public void ActionHouse(string param)
	{
		ShowHintText ("打开拍卖行", 1.0f);

		return;
	}

	public void AddRandomChart(string param)
	{
		ChartRoom.GetInstance ().AddRandom ();

		return;
	}

	public void RequestHighScore()
	{
		long highScore = GetBestScore ();
		ShowHintText ("Flappy Bird 当前最高分" + highScore, 1.0f);		

		return;
	}

	[DllImport("__Internal")]
	private static extern void SetActiveTimer (string i_timer);

	[DllImport("__Internal")]
	private static extern void FinishedUnityInterfaceStarting();

	[DllImport("__Internal")]
	private static extern long GetBestScore();

	public void RequestActiveTimer(string param)
	{
		SetActiveTimer ("0:59");

		return;
	}
}
