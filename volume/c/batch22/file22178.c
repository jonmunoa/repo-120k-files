// fichero 22178 -- macros y constantes -- MODIFICADO
#define LIMITE_22178 22378
#define FACTOR_22178 5

int aplicar_limite22178(int valor) {
    if (valor > LIMITE_22178) return LIMITE_22178;
    return valor * FACTOR_22178;
}
