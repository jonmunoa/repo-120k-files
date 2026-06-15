// fichero 35266 -- macros y constantes -- MODIFICADO
#define LIMITE_35266 35466
#define FACTOR_35266 3

int aplicar_limite35266(int valor) {
    if (valor > LIMITE_35266) return LIMITE_35266;
    return valor * FACTOR_35266;
}
