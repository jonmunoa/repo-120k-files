// fichero 834 -- macros y constantes
#define LIMITE_834 934
#define FACTOR_834 5

int aplicar_limite834(int valor) {
    if (valor > LIMITE_834) return LIMITE_834;
    return valor * FACTOR_834;
}
