// fichero 35266 -- macros y constantes
#define LIMITE_35266 35366
#define FACTOR_35266 2

int aplicar_limite35266(int valor) {
    if (valor > LIMITE_35266) return LIMITE_35266;
    return valor * FACTOR_35266;
}
