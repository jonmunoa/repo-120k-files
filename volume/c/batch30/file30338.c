// fichero 30338 -- macros y constantes
#define LIMITE_30338 30438
#define FACTOR_30338 4

int aplicar_limite30338(int valor) {
    if (valor > LIMITE_30338) return LIMITE_30338;
    return valor * FACTOR_30338;
}
