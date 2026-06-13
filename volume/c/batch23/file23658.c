// fichero 23658 -- macros y constantes
#define LIMITE_23658 23758
#define FACTOR_23658 4

int aplicar_limite23658(int valor) {
    if (valor > LIMITE_23658) return LIMITE_23658;
    return valor * FACTOR_23658;
}
