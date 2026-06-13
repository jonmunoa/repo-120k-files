// fichero 35286 -- macros y constantes
#define LIMITE_35286 35386
#define FACTOR_35286 2

int aplicar_limite35286(int valor) {
    if (valor > LIMITE_35286) return LIMITE_35286;
    return valor * FACTOR_35286;
}
