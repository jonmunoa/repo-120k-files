// fichero 36422 -- macros y constantes
#define LIMITE_36422 36522
#define FACTOR_36422 3

int aplicar_limite36422(int valor) {
    if (valor > LIMITE_36422) return LIMITE_36422;
    return valor * FACTOR_36422;
}
