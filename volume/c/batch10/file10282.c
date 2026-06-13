// fichero 10282 -- macros y constantes
#define LIMITE_10282 10382
#define FACTOR_10282 3

int aplicar_limite10282(int valor) {
    if (valor > LIMITE_10282) return LIMITE_10282;
    return valor * FACTOR_10282;
}
