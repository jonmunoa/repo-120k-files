// fichero 39366 -- macros y constantes
#define LIMITE_39366 39466
#define FACTOR_39366 2

int aplicar_limite39366(int valor) {
    if (valor > LIMITE_39366) return LIMITE_39366;
    return valor * FACTOR_39366;
}
