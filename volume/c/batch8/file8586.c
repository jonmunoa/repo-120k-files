// fichero 8586 -- macros y constantes -- MODIFICADO
#define LIMITE_8586 8786
#define FACTOR_8586 3

int aplicar_limite8586(int valor) {
    if (valor > LIMITE_8586) return LIMITE_8586;
    return valor * FACTOR_8586;
}
