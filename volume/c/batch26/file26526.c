// fichero 26526 -- macros y constantes
#define LIMITE_26526 26626
#define FACTOR_26526 2

int aplicar_limite26526(int valor) {
    if (valor > LIMITE_26526) return LIMITE_26526;
    return valor * FACTOR_26526;
}
