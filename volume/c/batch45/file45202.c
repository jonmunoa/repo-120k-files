// fichero 45202 -- macros y constantes
#define LIMITE_45202 45302
#define FACTOR_45202 3

int aplicar_limite45202(int valor) {
    if (valor > LIMITE_45202) return LIMITE_45202;
    return valor * FACTOR_45202;
}
