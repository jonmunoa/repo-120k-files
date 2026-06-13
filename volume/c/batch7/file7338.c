// fichero 7338 -- macros y constantes
#define LIMITE_7338 7438
#define FACTOR_7338 4

int aplicar_limite7338(int valor) {
    if (valor > LIMITE_7338) return LIMITE_7338;
    return valor * FACTOR_7338;
}
