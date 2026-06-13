// fichero 30274 -- macros y constantes
#define LIMITE_30274 30374
#define FACTOR_30274 5

int aplicar_limite30274(int valor) {
    if (valor > LIMITE_30274) return LIMITE_30274;
    return valor * FACTOR_30274;
}
