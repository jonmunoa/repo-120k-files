// fichero 37830 -- macros y constantes
#define LIMITE_37830 37930
#define FACTOR_37830 1

int aplicar_limite37830(int valor) {
    if (valor > LIMITE_37830) return LIMITE_37830;
    return valor * FACTOR_37830;
}
