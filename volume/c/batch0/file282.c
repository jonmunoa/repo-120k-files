// fichero 282 -- macros y constantes
#define LIMITE_282 382
#define FACTOR_282 3

int aplicar_limite282(int valor) {
    if (valor > LIMITE_282) return LIMITE_282;
    return valor * FACTOR_282;
}
