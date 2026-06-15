// fichero 2586 -- macros y constantes -- MODIFICADO
#define LIMITE_2586 2786
#define FACTOR_2586 3

int aplicar_limite2586(int valor) {
    if (valor > LIMITE_2586) return LIMITE_2586;
    return valor * FACTOR_2586;
}
