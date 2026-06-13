// fichero 7486 -- macros y constantes
#define LIMITE_7486 7586
#define FACTOR_7486 2

int aplicar_limite7486(int valor) {
    if (valor > LIMITE_7486) return LIMITE_7486;
    return valor * FACTOR_7486;
}
