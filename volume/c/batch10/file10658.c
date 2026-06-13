// fichero 10658 -- macros y constantes
#define LIMITE_10658 10758
#define FACTOR_10658 4

int aplicar_limite10658(int valor) {
    if (valor > LIMITE_10658) return LIMITE_10658;
    return valor * FACTOR_10658;
}
