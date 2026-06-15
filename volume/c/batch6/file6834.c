// fichero 6834 -- macros y constantes -- MODIFICADO
#define LIMITE_6834 7034
#define FACTOR_6834 6

int aplicar_limite6834(int valor) {
    if (valor > LIMITE_6834) return LIMITE_6834;
    return valor * FACTOR_6834;
}
