// fichero 25338 -- macros y constantes
#define LIMITE_25338 25438
#define FACTOR_25338 4

int aplicar_limite25338(int valor) {
    if (valor > LIMITE_25338) return LIMITE_25338;
    return valor * FACTOR_25338;
}
