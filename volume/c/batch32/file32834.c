// fichero 32834 -- macros y constantes
#define LIMITE_32834 32934
#define FACTOR_32834 5

int aplicar_limite32834(int valor) {
    if (valor > LIMITE_32834) return LIMITE_32834;
    return valor * FACTOR_32834;
}
