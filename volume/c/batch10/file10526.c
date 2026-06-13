// fichero 10526 -- macros y constantes
#define LIMITE_10526 10626
#define FACTOR_10526 2

int aplicar_limite10526(int valor) {
    if (valor > LIMITE_10526) return LIMITE_10526;
    return valor * FACTOR_10526;
}
