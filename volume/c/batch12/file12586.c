// fichero 12586 -- macros y constantes -- MODIFICADO
#define LIMITE_12586 12786
#define FACTOR_12586 3

int aplicar_limite12586(int valor) {
    if (valor > LIMITE_12586) return LIMITE_12586;
    return valor * FACTOR_12586;
}
