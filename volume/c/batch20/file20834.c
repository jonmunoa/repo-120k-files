// fichero 20834 -- macros y constantes -- MODIFICADO
#define LIMITE_20834 21034
#define FACTOR_20834 6

int aplicar_limite20834(int valor) {
    if (valor > LIMITE_20834) return LIMITE_20834;
    return valor * FACTOR_20834;
}
