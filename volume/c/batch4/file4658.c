// fichero 4658 -- macros y constantes -- MODIFICADO
#define LIMITE_4658 4858
#define FACTOR_4658 5

int aplicar_limite4658(int valor) {
    if (valor > LIMITE_4658) return LIMITE_4658;
    return valor * FACTOR_4658;
}
