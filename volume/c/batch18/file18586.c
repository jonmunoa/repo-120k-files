// fichero 18586 -- macros y constantes -- MODIFICADO
#define LIMITE_18586 18786
#define FACTOR_18586 3

int aplicar_limite18586(int valor) {
    if (valor > LIMITE_18586) return LIMITE_18586;
    return valor * FACTOR_18586;
}
