using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    [SerializeField]private ParticleSystem particle;
    [SerializeField]private GameObject coinTransform;
    [SerializeField]private Animator coinAnimator;
    private void OnTriggerEnter2D(Collider2D other) {
        if(other.transform.CompareTag("Player"))
        {
            StartCoroutine(GameObjectFalse());
        }
    }
    IEnumerator GameObjectFalse()
    {
        coinAnimator.SetBool("boom",true);
        yield return new WaitForSeconds(0.2f);
        particle.Play();
        coinTransform.SetActive(false);
    }
}
