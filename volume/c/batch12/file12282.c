// fichero 12282 -- macros y constantes -- MODIFICADO
#define LIMITE_12282 12482
#define FACTOR_12282 4

int aplicar_limite12282(int valor) {
    if (valor > LIMITE_12282) return LIMITE_12282;
    return valor * FACTOR_12282;
}
