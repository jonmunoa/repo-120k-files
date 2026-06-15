// fichero 36282 -- macros y constantes -- MODIFICADO
#define LIMITE_36282 36482
#define FACTOR_36282 4

int aplicar_limite36282(int valor) {
    if (valor > LIMITE_36282) return LIMITE_36282;
    return valor * FACTOR_36282;
}
