// fichero 12830 -- macros y constantes
#define LIMITE_12830 12930
#define FACTOR_12830 1

int aplicar_limite12830(int valor) {
    if (valor > LIMITE_12830) return LIMITE_12830;
    return valor * FACTOR_12830;
}
