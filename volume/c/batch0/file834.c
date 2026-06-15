// fichero 834 -- macros y constantes -- MODIFICADO
#define LIMITE_834 1034
#define FACTOR_834 6

int aplicar_limite834(int valor) {
    if (valor > LIMITE_834) return LIMITE_834;
    return valor * FACTOR_834;
}
