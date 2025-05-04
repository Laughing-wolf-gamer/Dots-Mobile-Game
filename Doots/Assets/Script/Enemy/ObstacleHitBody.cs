using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleHitBody : MonoBehaviour
{

    [SerializeField]private obstacle obstacle;

    private void OnTriggerEnter2D(Collider2D other) {
        // obstacle.enabled= false;
    }

}
