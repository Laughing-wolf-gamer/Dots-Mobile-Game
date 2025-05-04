using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
public class CameraTarget : MonoBehaviour
{
    [SerializeField]private CinemachineTargetGroup targetGroup;
    [SerializeField]private Transform points;
    [SerializeField]private PlayerMove playerMove;
    [SerializeField]private GameObject runningCamera;
    [SerializeField]private GameObject Targetgroup;
    [SerializeField]private GameObject revealCamera;
    
    private void Update() {
        if(playerMove.targetsReturn().Length <= playerMove.returntargetIndex())
            return;
        targetGroup.m_Targets[1].target = playerMove.targetbody();
    }
    public void reavel()
    {
        Targetgroup.SetActive(false);
        runningCamera.SetActive(false);
        revealCamera.SetActive(true);
    }
}
