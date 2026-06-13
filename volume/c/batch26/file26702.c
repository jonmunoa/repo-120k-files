// fichero 26702 -- macros y constantes
#define LIMITE_26702 26802
#define FACTOR_26702 3

int aplicar_limite26702(int valor) {
    if (valor > LIMITE_26702) return LIMITE_26702;
    return valor * FACTOR_26702;
}
