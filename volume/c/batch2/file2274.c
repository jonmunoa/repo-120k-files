// fichero 2274 -- macros y constantes
#define LIMITE_2274 2374
#define FACTOR_2274 5

int aplicar_limite2274(int valor) {
    if (valor > LIMITE_2274) return LIMITE_2274;
    return valor * FACTOR_2274;
}
