// fichero 41178 -- macros y constantes
#define LIMITE_41178 41278
#define FACTOR_41178 4

int aplicar_limite41178(int valor) {
    if (valor > LIMITE_41178) return LIMITE_41178;
    return valor * FACTOR_41178;
}
