// fichero 14658 -- macros y constantes
#define LIMITE_14658 14758
#define FACTOR_14658 4

int aplicar_limite14658(int valor) {
    if (valor > LIMITE_14658) return LIMITE_14658;
    return valor * FACTOR_14658;
}
