// fichero 23834 -- macros y constantes -- MODIFICADO
#define LIMITE_23834 24034
#define FACTOR_23834 6

int aplicar_limite23834(int valor) {
    if (valor > LIMITE_23834) return LIMITE_23834;
    return valor * FACTOR_23834;
}
