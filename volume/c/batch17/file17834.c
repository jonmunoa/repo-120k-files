// fichero 17834 -- macros y constantes -- MODIFICADO
#define LIMITE_17834 18034
#define FACTOR_17834 6

int aplicar_limite17834(int valor) {
    if (valor > LIMITE_17834) return LIMITE_17834;
    return valor * FACTOR_17834;
}
