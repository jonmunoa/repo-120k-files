// fichero 32238 -- macros y constantes
#define LIMITE_32238 32338
#define FACTOR_32238 4

int aplicar_limite32238(int valor) {
    if (valor > LIMITE_32238) return LIMITE_32238;
    return valor * FACTOR_32238;
}
