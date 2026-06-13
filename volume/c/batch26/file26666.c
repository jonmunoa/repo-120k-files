// fichero 26666 -- macros y constantes
#define LIMITE_26666 26766
#define FACTOR_26666 2

int aplicar_limite26666(int valor) {
    if (valor > LIMITE_26666) return LIMITE_26666;
    return valor * FACTOR_26666;
}
