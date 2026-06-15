// fichero 4178 -- macros y constantes -- MODIFICADO
#define LIMITE_4178 4378
#define FACTOR_4178 5

int aplicar_limite4178(int valor) {
    if (valor > LIMITE_4178) return LIMITE_4178;
    return valor * FACTOR_4178;
}
