using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour 
{
	private float speed;
	private Vector2 deltaMove;
	private Vector2 touchBeginPos;
	private bool isMoving;
	private float angularDrag;
	private float drag;
	private float mass;
	private Button runButton;

	// Use this for initialization
	void Start () 
	{
		speed = 0;
		mass = GetComponent<Rigidbody> ().mass;
		angularDrag = GetComponent<Rigidbody> ().angularDrag;
		drag = GetComponent<Rigidbody> ().drag;
		touchBeginPos = new Vector2 (0.0f, 0.0f);

		return;
	}
	
	// Update is called once per frame
	void Update () 
	{
		return;
	}

	void FixedUpdate()
	{
		float handleRight = 0;
		float touchOffset = 0;
		if (Input.touchPressureSupported)
		{
			if(Input.touchCount > 0)
			{
				Touch touch = Input.GetTouch (0);
				touchOffset = touch.pressure;
			}
		}
		else 
		{
#if UNITY_EDITOR
			handleRight = Input.GetAxis("Horizontal");
#else
			Touch touch = Input.GetTouch(0);
			switch (touch.phase)  
			{  
			case TouchPhase.Began:  
				touchBeginPos = touch.position;  
				isMoving = false;
				break;  

			case TouchPhase.Moved:  
				isMoving = true;  
				deltaMove = touch.position - touchBeginPos;
				touchBeginPos = touch.position;
				break;  

			case TouchPhase.Ended:  
				if (!isMoving)  
				{
				}  
				isMoving = false;  
				break;  
			}
#endif
		}
		Vector3 movement = new Vector3 (speed, 0.0f, 0.0f);
		transform.position = transform.position + movement * Time.deltaTime;

		Vector3 force = new Vector3 (touchOffset + handleRight + deltaMove.x, 0.0f, 0.0f);
		Vector3 frictionForce = new Vector3 (angularDrag * mass * 9.8f, 0.0f, 0.0f);

#if !UNITY_EDITOR
		if (0 == force.x) 
		{
			frictionForce.x = frictionForce.x + drag * mass * 30.0f;
		}
#endif
		Vector3 forceResult = force - frictionForce;
		float acceleration = forceResult.x / mass;
		speed = speed + acceleration * Time.deltaTime;
		speed = speed < 0 ? 0 : speed;
	}
}
