// fichero 52702 -- macros y constantes
#define LIMITE_52702 52802
#define FACTOR_52702 3

int aplicar_limite52702(int valor) {
    if (valor > LIMITE_52702) return LIMITE_52702;
    return valor * FACTOR_52702;
}
