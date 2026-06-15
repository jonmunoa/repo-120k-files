// fichero 9602 -- macros y constantes -- MODIFICADO
#define LIMITE_9602 9802
#define FACTOR_9602 4

int aplicar_limite9602(int valor) {
    if (valor > LIMITE_9602) return LIMITE_9602;
    return valor * FACTOR_9602;
}
