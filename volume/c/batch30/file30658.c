// fichero 30658 -- macros y constantes
#define LIMITE_30658 30758
#define FACTOR_30658 4

int aplicar_limite30658(int valor) {
    if (valor > LIMITE_30658) return LIMITE_30658;
    return valor * FACTOR_30658;
}
