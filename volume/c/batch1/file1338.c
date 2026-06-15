// fichero 1338 -- macros y constantes -- MODIFICADO
#define LIMITE_1338 1538
#define FACTOR_1338 5

int aplicar_limite1338(int valor) {
    if (valor > LIMITE_1338) return LIMITE_1338;
    return valor * FACTOR_1338;
}
