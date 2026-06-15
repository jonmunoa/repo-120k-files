// fichero 43178 -- macros y constantes -- MODIFICADO
#define LIMITE_43178 43378
#define FACTOR_43178 5

int aplicar_limite43178(int valor) {
    if (valor > LIMITE_43178) return LIMITE_43178;
    return valor * FACTOR_43178;
}
