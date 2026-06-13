// fichero 14702 -- macros y constantes
#define LIMITE_14702 14802
#define FACTOR_14702 3

int aplicar_limite14702(int valor) {
    if (valor > LIMITE_14702) return LIMITE_14702;
    return valor * FACTOR_14702;
}
