// fichero 45526 -- macros y constantes
#define LIMITE_45526 45626
#define FACTOR_45526 2

int aplicar_limite45526(int valor) {
    if (valor > LIMITE_45526) return LIMITE_45526;
    return valor * FACTOR_45526;
}
