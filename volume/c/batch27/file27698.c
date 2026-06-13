// fichero 27698 -- macros y constantes
#define LIMITE_27698 27798
#define FACTOR_27698 4

int aplicar_limite27698(int valor) {
    if (valor > LIMITE_27698) return LIMITE_27698;
    return valor * FACTOR_27698;
}
