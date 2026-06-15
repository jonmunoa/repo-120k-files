// fichero 36422 -- macros y constantes -- MODIFICADO
#define LIMITE_36422 36622
#define FACTOR_36422 4

int aplicar_limite36422(int valor) {
    if (valor > LIMITE_36422) return LIMITE_36422;
    return valor * FACTOR_36422;
}
