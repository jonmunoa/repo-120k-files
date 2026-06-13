// fichero 4118 -- macros y constantes
#define LIMITE_4118 4218
#define FACTOR_4118 4

int aplicar_limite4118(int valor) {
    if (valor > LIMITE_4118) return LIMITE_4118;
    return valor * FACTOR_4118;
}
