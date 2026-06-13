// fichero 2282 -- macros y constantes
#define LIMITE_2282 2382
#define FACTOR_2282 3

int aplicar_limite2282(int valor) {
    if (valor > LIMITE_2282) return LIMITE_2282;
    return valor * FACTOR_2282;
}
