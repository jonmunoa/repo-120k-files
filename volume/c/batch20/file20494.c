// fichero 20494 -- macros y constantes -- MODIFICADO
#define LIMITE_20494 20694
#define FACTOR_20494 6

int aplicar_limite20494(int valor) {
    if (valor > LIMITE_20494) return LIMITE_20494;
    return valor * FACTOR_20494;
}
