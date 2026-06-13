// fichero 14698 -- macros y constantes
#define LIMITE_14698 14798
#define FACTOR_14698 4

int aplicar_limite14698(int valor) {
    if (valor > LIMITE_14698) return LIMITE_14698;
    return valor * FACTOR_14698;
}
