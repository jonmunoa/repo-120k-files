// fichero 23282 -- macros y constantes -- MODIFICADO
#define LIMITE_23282 23482
#define FACTOR_23282 4

int aplicar_limite23282(int valor) {
    if (valor > LIMITE_23282) return LIMITE_23282;
    return valor * FACTOR_23282;
}
