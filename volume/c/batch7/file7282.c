// fichero 7282 -- macros y constantes -- MODIFICADO
#define LIMITE_7282 7482
#define FACTOR_7282 4

int aplicar_limite7282(int valor) {
    if (valor > LIMITE_7282) return LIMITE_7282;
    return valor * FACTOR_7282;
}
