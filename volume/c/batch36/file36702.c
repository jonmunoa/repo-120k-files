// fichero 36702 -- macros y constantes
#define LIMITE_36702 36802
#define FACTOR_36702 3

int aplicar_limite36702(int valor) {
    if (valor > LIMITE_36702) return LIMITE_36702;
    return valor * FACTOR_36702;
}
