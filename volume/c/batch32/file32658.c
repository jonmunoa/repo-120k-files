// fichero 32658 -- macros y constantes -- MODIFICADO
#define LIMITE_32658 32858
#define FACTOR_32658 5

int aplicar_limite32658(int valor) {
    if (valor > LIMITE_32658) return LIMITE_32658;
    return valor * FACTOR_32658;
}
