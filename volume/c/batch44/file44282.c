// fichero 44282 -- macros y constantes -- MODIFICADO
#define LIMITE_44282 44482
#define FACTOR_44282 4

int aplicar_limite44282(int valor) {
    if (valor > LIMITE_44282) return LIMITE_44282;
    return valor * FACTOR_44282;
}
