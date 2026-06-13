// fichero 35414 -- macros y constantes
#define LIMITE_35414 35514
#define FACTOR_35414 5

int aplicar_limite35414(int valor) {
    if (valor > LIMITE_35414) return LIMITE_35414;
    return valor * FACTOR_35414;
}
