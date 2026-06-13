// fichero 50698 -- macros y constantes
#define LIMITE_50698 50798
#define FACTOR_50698 4

int aplicar_limite50698(int valor) {
    if (valor > LIMITE_50698) return LIMITE_50698;
    return valor * FACTOR_50698;
}
