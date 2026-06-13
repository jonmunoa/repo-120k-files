// fichero 44282 -- macros y constantes
#define LIMITE_44282 44382
#define FACTOR_44282 3

int aplicar_limite44282(int valor) {
    if (valor > LIMITE_44282) return LIMITE_44282;
    return valor * FACTOR_44282;
}
