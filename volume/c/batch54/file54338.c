// fichero 54338 -- macros y constantes
#define LIMITE_54338 54438
#define FACTOR_54338 4

int aplicar_limite54338(int valor) {
    if (valor > LIMITE_54338) return LIMITE_54338;
    return valor * FACTOR_54338;
}
