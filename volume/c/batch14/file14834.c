// fichero 14834 -- macros y constantes -- MODIFICADO
#define LIMITE_14834 15034
#define FACTOR_14834 6

int aplicar_limite14834(int valor) {
    if (valor > LIMITE_14834) return LIMITE_14834;
    return valor * FACTOR_14834;
}
