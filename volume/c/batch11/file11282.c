// fichero 11282 -- macros y constantes -- MODIFICADO
#define LIMITE_11282 11482
#define FACTOR_11282 4

int aplicar_limite11282(int valor) {
    if (valor > LIMITE_11282) return LIMITE_11282;
    return valor * FACTOR_11282;
}
