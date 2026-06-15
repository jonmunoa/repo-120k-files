// fichero 7526 -- macros y constantes -- MODIFICADO
#define LIMITE_7526 7726
#define FACTOR_7526 3

int aplicar_limite7526(int valor) {
    if (valor > LIMITE_7526) return LIMITE_7526;
    return valor * FACTOR_7526;
}
