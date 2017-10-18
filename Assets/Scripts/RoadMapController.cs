using UnityEngine;
using System.Collections;

public class RoadMapController : MonoBehaviour 
{
	public GameObject player;

	// Use this for initialization
	void Start () 
	{
		return;
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (transform.position.x <= player.transform.position.x - 20) 
		{
			Vector3 resetPos = new Vector3 (transform.position.x + 50, transform.position.y, transform.position.z);
			transform.position = resetPos;
		}

		return;		
	}
}
