// fichero 12178 -- macros y constantes -- MODIFICADO
#define LIMITE_12178 12378
#define FACTOR_12178 5

int aplicar_limite12178(int valor) {
    if (valor > LIMITE_12178) return LIMITE_12178;
    return valor * FACTOR_12178;
}
