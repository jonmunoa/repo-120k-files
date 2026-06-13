// fichero 8282 -- macros y constantes
#define LIMITE_8282 8382
#define FACTOR_8282 3

int aplicar_limite8282(int valor) {
    if (valor > LIMITE_8282) return LIMITE_8282;
    return valor * FACTOR_8282;
}
