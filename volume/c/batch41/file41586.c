// fichero 41586 -- macros y constantes -- MODIFICADO
#define LIMITE_41586 41786
#define FACTOR_41586 3

int aplicar_limite41586(int valor) {
    if (valor > LIMITE_41586) return LIMITE_41586;
    return valor * FACTOR_41586;
}
