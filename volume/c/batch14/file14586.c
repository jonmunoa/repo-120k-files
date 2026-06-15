// fichero 14586 -- macros y constantes -- MODIFICADO
#define LIMITE_14586 14786
#define FACTOR_14586 3

int aplicar_limite14586(int valor) {
    if (valor > LIMITE_14586) return LIMITE_14586;
    return valor * FACTOR_14586;
}
