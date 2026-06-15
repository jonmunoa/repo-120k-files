// fichero 21282 -- macros y constantes -- MODIFICADO
#define LIMITE_21282 21482
#define FACTOR_21282 4

int aplicar_limite21282(int valor) {
    if (valor > LIMITE_21282) return LIMITE_21282;
    return valor * FACTOR_21282;
}
