// fichero 8178 -- macros y constantes
#define LIMITE_8178 8278
#define FACTOR_8178 4

int aplicar_limite8178(int valor) {
    if (valor > LIMITE_8178) return LIMITE_8178;
    return valor * FACTOR_8178;
}
