// fichero 43178 -- macros y constantes
#define LIMITE_43178 43278
#define FACTOR_43178 4

int aplicar_limite43178(int valor) {
    if (valor > LIMITE_43178) return LIMITE_43178;
    return valor * FACTOR_43178;
}
