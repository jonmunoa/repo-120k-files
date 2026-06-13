// fichero 36698 -- macros y constantes
#define LIMITE_36698 36798
#define FACTOR_36698 4

int aplicar_limite36698(int valor) {
    if (valor > LIMITE_36698) return LIMITE_36698;
    return valor * FACTOR_36698;
}
