// fichero 30834 -- macros y constantes -- MODIFICADO
#define LIMITE_30834 31034
#define FACTOR_30834 6

int aplicar_limite30834(int valor) {
    if (valor > LIMITE_30834) return LIMITE_30834;
    return valor * FACTOR_30834;
}
