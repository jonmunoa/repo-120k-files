// fichero 36786 -- macros y constantes
#define LIMITE_36786 36886
#define FACTOR_36786 2

int aplicar_limite36786(int valor) {
    if (valor > LIMITE_36786) return LIMITE_36786;
    return valor * FACTOR_36786;
}
