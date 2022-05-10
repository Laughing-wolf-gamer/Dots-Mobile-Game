using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DirectionArrow : MonoBehaviour
{
    [SerializeField]private InputManager inputManager;
    [SerializeField]private PlayerMove playerMove;
    [SerializeField]private Transform directionSprite;
    [SerializeField]private GameManger gameManger;
    private void Update() {
        if(inputManager.isHolding() && !playerMove.IsrUNNING() && !gameManger.returnbool())
        {
            directionSprite.gameObject.SetActive(true);
            
        }
        else if(!inputManager.isHolding())
        {
            directionSprite.gameObject.SetActive(false);
        }

        if(playerMove.returntargetIndex() >= playerMove.targetsReturn().Length)
        {
            return;
        }
        else
        {
            Transform target = playerMove.targetsReturn()[(int)playerMove.returntargetIndex()].transform;
            Vector2 relativePos = target.position - transform.position;
            float angle = Mathf.Atan2(relativePos.y, relativePos.x) * Mathf.Rad2Deg;
            Quaternion rotation = Quaternion.AngleAxis(angle, Vector3.forward);
            directionSprite.rotation = rotation;
        }
    }
}
