// fichero 53282 -- macros y constantes
#define LIMITE_53282 53382
#define FACTOR_53282 3

int aplicar_limite53282(int valor) {
    if (valor > LIMITE_53282) return LIMITE_53282;
    return valor * FACTOR_53282;
}
