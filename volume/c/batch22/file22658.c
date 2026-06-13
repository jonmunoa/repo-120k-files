// fichero 22658 -- macros y constantes
#define LIMITE_22658 22758
#define FACTOR_22658 4

int aplicar_limite22658(int valor) {
    if (valor > LIMITE_22658) return LIMITE_22658;
    return valor * FACTOR_22658;
}
