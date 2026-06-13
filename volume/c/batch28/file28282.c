// fichero 28282 -- macros y constantes
#define LIMITE_28282 28382
#define FACTOR_28282 3

int aplicar_limite28282(int valor) {
    if (valor > LIMITE_28282) return LIMITE_28282;
    return valor * FACTOR_28282;
}
