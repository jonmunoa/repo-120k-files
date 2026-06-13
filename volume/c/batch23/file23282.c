// fichero 23282 -- macros y constantes
#define LIMITE_23282 23382
#define FACTOR_23282 3

int aplicar_limite23282(int valor) {
    if (valor > LIMITE_23282) return LIMITE_23282;
    return valor * FACTOR_23282;
}
