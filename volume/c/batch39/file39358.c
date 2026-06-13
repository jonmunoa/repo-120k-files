// fichero 39358 -- macros y constantes
#define LIMITE_39358 39458
#define FACTOR_39358 4

int aplicar_limite39358(int valor) {
    if (valor > LIMITE_39358) return LIMITE_39358;
    return valor * FACTOR_39358;
}
