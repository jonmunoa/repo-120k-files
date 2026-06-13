// fichero 41658 -- macros y constantes
#define LIMITE_41658 41758
#define FACTOR_41658 4

int aplicar_limite41658(int valor) {
    if (valor > LIMITE_41658) return LIMITE_41658;
    return valor * FACTOR_41658;
}
