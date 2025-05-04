using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    bool isTouchHold;
    bool hold;
    bool isInputEnable = true;
    Vector2 screenpoint;
    private void Update() {
        if(isInputEnable)
        {
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                screenpoint = Camera.main.ScreenToWorldPoint(touch.position);
            }
        }
    }
    public void ButtonHoldDown()
    {
        if(isInputEnable)
        {
            isTouchHold = false;
            hold = true;
        }

    }
    public void ButtonHoldUp()
    {
        if(isInputEnable)
        {
            isTouchHold = true;
            hold = false;
            StartCoroutine(isToucHhOLDFLSE());
        }
    }
    public void isInputEnablefALSE()
    {
        isInputEnable = false;
    }
    public void isInputEnabletrue()
    {
        isInputEnable = true;
    }

    public bool isTouchHoldUp()
    {
        return isTouchHold;
    }
    public bool isHolding()
    {
        return hold;
    }
    IEnumerator isToucHhOLDFLSE()
    {
        yield return new WaitForSeconds(0.2f);
        isTouchHold = false;
    }
    public Vector2 returnscreenpoint()
    {
        return screenpoint;
    }
    
}
