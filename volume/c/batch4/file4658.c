// fichero 4658 -- macros y constantes
#define LIMITE_4658 4758
#define FACTOR_4658 4

int aplicar_limite4658(int valor) {
    if (valor > LIMITE_4658) return LIMITE_4658;
    return valor * FACTOR_4658;
}
