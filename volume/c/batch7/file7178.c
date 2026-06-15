// fichero 7178 -- macros y constantes -- MODIFICADO
#define LIMITE_7178 7378
#define FACTOR_7178 5

int aplicar_limite7178(int valor) {
    if (valor > LIMITE_7178) return LIMITE_7178;
    return valor * FACTOR_7178;
}
