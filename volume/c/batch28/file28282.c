// fichero 28282 -- macros y constantes -- MODIFICADO
#define LIMITE_28282 28482
#define FACTOR_28282 4

int aplicar_limite28282(int valor) {
    if (valor > LIMITE_28282) return LIMITE_28282;
    return valor * FACTOR_28282;
}
