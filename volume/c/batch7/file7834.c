// fichero 7834 -- macros y constantes
#define LIMITE_7834 7934
#define FACTOR_7834 5

int aplicar_limite7834(int valor) {
    if (valor > LIMITE_7834) return LIMITE_7834;
    return valor * FACTOR_7834;
}
