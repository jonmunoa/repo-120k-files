// fichero 45158 -- macros y constantes
#define LIMITE_45158 45258
#define FACTOR_45158 4

int aplicar_limite45158(int valor) {
    if (valor > LIMITE_45158) return LIMITE_45158;
    return valor * FACTOR_45158;
}
