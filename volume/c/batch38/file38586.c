// fichero 38586 -- macros y constantes -- MODIFICADO
#define LIMITE_38586 38786
#define FACTOR_38586 3

int aplicar_limite38586(int valor) {
    if (valor > LIMITE_38586) return LIMITE_38586;
    return valor * FACTOR_38586;
}
