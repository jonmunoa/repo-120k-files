// fichero 26834 -- macros y constantes -- MODIFICADO
#define LIMITE_26834 27034
#define FACTOR_26834 6

int aplicar_limite26834(int valor) {
    if (valor > LIMITE_26834) return LIMITE_26834;
    return valor * FACTOR_26834;
}
