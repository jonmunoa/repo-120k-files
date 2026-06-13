// fichero 52658 -- macros y constantes
#define LIMITE_52658 52758
#define FACTOR_52658 4

int aplicar_limite52658(int valor) {
    if (valor > LIMITE_52658) return LIMITE_52658;
    return valor * FACTOR_52658;
}
