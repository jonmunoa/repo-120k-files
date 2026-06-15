// fichero 1834 -- macros y constantes -- MODIFICADO
#define LIMITE_1834 2034
#define FACTOR_1834 6

int aplicar_limite1834(int valor) {
    if (valor > LIMITE_1834) return LIMITE_1834;
    return valor * FACTOR_1834;
}
