using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChartRoom 
{
	static ChartRoom _Instance = null;
	static string _ChartText = null;
	static string []_RandomString;

	public static ChartRoom GetInstance ()
	{
		if (null == _Instance) 
		{
			_Instance = new ChartRoom ();
		}
		return _Instance;
	}

	ChartRoom()
	{
		_ChartText = "";
		_RandomString = new string[]{ "今天真是个好天气", "出极品了！", "中午吃什么？", "神无月真好玩", "开新服了，我先去捏个人", "行会活动了，快上线！", "明天七点准时上线活动啊" };

		return;
	}

	public string GetChartText()
	{
		return _ChartText;
	}

	public void AppendChartText(string chartText)
	{
		_ChartText = _ChartText + "\n" + chartText;

		return;
	}

	public void ClearChartText()
	{
		_ChartText = "";

		return;
	}

	public void AddRandom()
	{
		int index = Random.Range (0, 7);
		AppendChartText(_RandomString [index]);

		return;
	}
}
