using UnityEngine;
using UnityEngine.UI;

public class ImageController : MonoBehaviour
{
    public Image targetImage; // Asigna tu objeto de imagen UI aquí
    public float fadeInDuration = 2.0f; // Duración del fade in en segundos

    private AspectRatioFitter aspectRatioFitter;
    private float currentLerpTime;
    private bool isFadingIn;

    void Start()
    {
        // Obtiene el componente AspectRatioFitter del objeto de imagen
        aspectRatioFitter = targetImage.GetComponent<AspectRatioFitter>();
    }

    // Llamado para iniciar la transición de fade in con una imagen específica
    public void StartFadeIn(Sprite newImage)
    {
        targetImage.sprite = newImage; // Cambiar la imagen

        // Actualiza el AspectRatioFitter con la relación de aspecto de la nueva imagen
        if (newImage != null)
        {
            aspectRatioFitter.aspectRatio = (float)newImage.texture.width / newImage.texture.height;
        }

        isFadingIn = true;
        currentLerpTime = 0f;
        targetImage.color = new Color(targetImage.color.r, targetImage.color.g, targetImage.color.b, 0); // Restablecer la transparencia
    }

    void Update()
    {
        if (isFadingIn)
        {
            currentLerpTime += Time.deltaTime;
            if (currentLerpTime > fadeInDuration)
            {
                currentLerpTime = fadeInDuration;
                isFadingIn = false;
            }

            float perc = currentLerpTime / fadeInDuration;
            targetImage.color = new Color(targetImage.color.r, targetImage.color.g, targetImage.color.b, perc);
        }
    }
}