// fichero 39178 -- macros y constantes -- MODIFICADO
#define LIMITE_39178 39378
#define FACTOR_39178 5

int aplicar_limite39178(int valor) {
    if (valor > LIMITE_39178) return LIMITE_39178;
    return valor * FACTOR_39178;
}
