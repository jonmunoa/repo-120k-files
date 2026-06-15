// fichero 17178 -- macros y constantes -- MODIFICADO
#define LIMITE_17178 17378
#define FACTOR_17178 5

int aplicar_limite17178(int valor) {
    if (valor > LIMITE_17178) return LIMITE_17178;
    return valor * FACTOR_17178;
}
