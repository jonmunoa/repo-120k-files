// fichero 29178 -- macros y constantes
#define LIMITE_29178 29278
#define FACTOR_29178 4

int aplicar_limite29178(int valor) {
    if (valor > LIMITE_29178) return LIMITE_29178;
    return valor * FACTOR_29178;
}
