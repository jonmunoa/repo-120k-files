// fichero 10786 -- macros y constantes
#define LIMITE_10786 10886
#define FACTOR_10786 2

int aplicar_limite10786(int valor) {
    if (valor > LIMITE_10786) return LIMITE_10786;
    return valor * FACTOR_10786;
}
