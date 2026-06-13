// fichero 14178 -- macros y constantes
#define LIMITE_14178 14278
#define FACTOR_14178 4

int aplicar_limite14178(int valor) {
    if (valor > LIMITE_14178) return LIMITE_14178;
    return valor * FACTOR_14178;
}
