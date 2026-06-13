// fichero 24382 -- macros y constantes
#define LIMITE_24382 24482
#define FACTOR_24382 3

int aplicar_limite24382(int valor) {
    if (valor > LIMITE_24382) return LIMITE_24382;
    return valor * FACTOR_24382;
}
