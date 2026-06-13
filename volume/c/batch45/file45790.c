// fichero 45790 -- macros y constantes
#define LIMITE_45790 45890
#define FACTOR_45790 1

int aplicar_limite45790(int valor) {
    if (valor > LIMITE_45790) return LIMITE_45790;
    return valor * FACTOR_45790;
}
