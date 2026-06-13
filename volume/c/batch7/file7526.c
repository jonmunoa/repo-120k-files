// fichero 7526 -- macros y constantes
#define LIMITE_7526 7626
#define FACTOR_7526 2

int aplicar_limite7526(int valor) {
    if (valor > LIMITE_7526) return LIMITE_7526;
    return valor * FACTOR_7526;
}
