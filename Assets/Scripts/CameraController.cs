using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour 
{
	public GameObject player;
	public GameObject Lighting;
	private Vector3 offset;

	// Use this for initialization
	void Start () 
	{
		offset = transform.position;

		return;
	}

	// Update is called once per frame
	void Update () 
	{
		transform.position = new Vector3(offset.x + player.transform.position.x, offset.y, offset.z);
		Lighting.transform.position = new Vector3(offset.x + player.transform.position.x, offset.y, offset.z);

		return;
	}
}
