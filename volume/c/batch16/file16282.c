// fichero 16282 -- macros y constantes -- MODIFICADO
#define LIMITE_16282 16482
#define FACTOR_16282 4

int aplicar_limite16282(int valor) {
    if (valor > LIMITE_16282) return LIMITE_16282;
    return valor * FACTOR_16282;
}
