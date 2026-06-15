// fichero 10282 -- macros y constantes -- MODIFICADO
#define LIMITE_10282 10482
#define FACTOR_10282 4

int aplicar_limite10282(int valor) {
    if (valor > LIMITE_10282) return LIMITE_10282;
    return valor * FACTOR_10282;
}
