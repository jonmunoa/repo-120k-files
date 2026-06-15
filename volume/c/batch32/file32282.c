// fichero 32282 -- macros y constantes -- MODIFICADO
#define LIMITE_32282 32482
#define FACTOR_32282 4

int aplicar_limite32282(int valor) {
    if (valor > LIMITE_32282) return LIMITE_32282;
    return valor * FACTOR_32282;
}
