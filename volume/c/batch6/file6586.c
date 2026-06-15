// fichero 6586 -- macros y constantes -- MODIFICADO
#define LIMITE_6586 6786
#define FACTOR_6586 3

int aplicar_limite6586(int valor) {
    if (valor > LIMITE_6586) return LIMITE_6586;
    return valor * FACTOR_6586;
}
