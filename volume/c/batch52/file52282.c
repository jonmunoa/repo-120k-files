// fichero 52282 -- macros y constantes
#define LIMITE_52282 52382
#define FACTOR_52282 3

int aplicar_limite52282(int valor) {
    if (valor > LIMITE_52282) return LIMITE_52282;
    return valor * FACTOR_52282;
}
