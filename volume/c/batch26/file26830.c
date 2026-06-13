// fichero 26830 -- macros y constantes
#define LIMITE_26830 26930
#define FACTOR_26830 1

int aplicar_limite26830(int valor) {
    if (valor > LIMITE_26830) return LIMITE_26830;
    return valor * FACTOR_26830;
}
