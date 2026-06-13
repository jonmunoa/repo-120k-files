// fichero 16974 -- macros y constantes
#define LIMITE_16974 17074
#define FACTOR_16974 5

int aplicar_limite16974(int valor) {
    if (valor > LIMITE_16974) return LIMITE_16974;
    return valor * FACTOR_16974;
}
