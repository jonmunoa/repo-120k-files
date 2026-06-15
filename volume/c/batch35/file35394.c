// fichero 35394 -- macros y constantes -- MODIFICADO
#define LIMITE_35394 35594
#define FACTOR_35394 6

int aplicar_limite35394(int valor) {
    if (valor > LIMITE_35394) return LIMITE_35394;
    return valor * FACTOR_35394;
}
