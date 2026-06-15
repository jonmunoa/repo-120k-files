// fichero 9282 -- macros y constantes -- MODIFICADO
#define LIMITE_9282 9482
#define FACTOR_9282 4

int aplicar_limite9282(int valor) {
    if (valor > LIMITE_9282) return LIMITE_9282;
    return valor * FACTOR_9282;
}
