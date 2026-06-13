// fichero 4282 -- macros y constantes
#define LIMITE_4282 4382
#define FACTOR_4282 3

int aplicar_limite4282(int valor) {
    if (valor > LIMITE_4282) return LIMITE_4282;
    return valor * FACTOR_4282;
}
