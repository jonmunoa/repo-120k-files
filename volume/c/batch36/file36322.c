// fichero 36322 -- macros y constantes
#define LIMITE_36322 36422
#define FACTOR_36322 3

int aplicar_limite36322(int valor) {
    if (valor > LIMITE_36322) return LIMITE_36322;
    return valor * FACTOR_36322;
}
