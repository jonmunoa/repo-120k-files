// fichero 36282 -- macros y constantes
#define LIMITE_36282 36382
#define FACTOR_36282 3

int aplicar_limite36282(int valor) {
    if (valor > LIMITE_36282) return LIMITE_36282;
    return valor * FACTOR_36282;
}
