// fichero 23586 -- macros y constantes -- MODIFICADO
#define LIMITE_23586 23786
#define FACTOR_23586 3

int aplicar_limite23586(int valor) {
    if (valor > LIMITE_23586) return LIMITE_23586;
    return valor * FACTOR_23586;
}
