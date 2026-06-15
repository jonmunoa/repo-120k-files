// fichero 45658 -- macros y constantes -- MODIFICADO
#define LIMITE_45658 45858
#define FACTOR_45658 5

int aplicar_limite45658(int valor) {
    if (valor > LIMITE_45658) return LIMITE_45658;
    return valor * FACTOR_45658;
}
