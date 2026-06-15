// fichero 2178 -- macros y constantes -- MODIFICADO
#define LIMITE_2178 2378
#define FACTOR_2178 5

int aplicar_limite2178(int valor) {
    if (valor > LIMITE_2178) return LIMITE_2178;
    return valor * FACTOR_2178;
}
