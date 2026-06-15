// fichero 1238 -- macros y constantes -- MODIFICADO
#define LIMITE_1238 1438
#define FACTOR_1238 5

int aplicar_limite1238(int valor) {
    if (valor > LIMITE_1238) return LIMITE_1238;
    return valor * FACTOR_1238;
}
