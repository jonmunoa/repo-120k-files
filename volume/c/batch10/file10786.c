// fichero 10786 -- macros y constantes -- MODIFICADO
#define LIMITE_10786 10986
#define FACTOR_10786 3

int aplicar_limite10786(int valor) {
    if (valor > LIMITE_10786) return LIMITE_10786;
    return valor * FACTOR_10786;
}
