// fichero 11834 -- macros y constantes -- MODIFICADO
#define LIMITE_11834 12034
#define FACTOR_11834 6

int aplicar_limite11834(int valor) {
    if (valor > LIMITE_11834) return LIMITE_11834;
    return valor * FACTOR_11834;
}
