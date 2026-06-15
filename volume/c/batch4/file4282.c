// fichero 4282 -- macros y constantes -- MODIFICADO
#define LIMITE_4282 4482
#define FACTOR_4282 4

int aplicar_limite4282(int valor) {
    if (valor > LIMITE_4282) return LIMITE_4282;
    return valor * FACTOR_4282;
}
