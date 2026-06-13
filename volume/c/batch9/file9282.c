// fichero 9282 -- macros y constantes
#define LIMITE_9282 9382
#define FACTOR_9282 3

int aplicar_limite9282(int valor) {
    if (valor > LIMITE_9282) return LIMITE_9282;
    return valor * FACTOR_9282;
}
