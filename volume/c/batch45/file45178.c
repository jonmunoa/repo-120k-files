// fichero 45178 -- macros y constantes -- MODIFICADO
#define LIMITE_45178 45378
#define FACTOR_45178 5

int aplicar_limite45178(int valor) {
    if (valor > LIMITE_45178) return LIMITE_45178;
    return valor * FACTOR_45178;
}
