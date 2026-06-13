// fichero 11282 -- macros y constantes
#define LIMITE_11282 11382
#define FACTOR_11282 3

int aplicar_limite11282(int valor) {
    if (valor > LIMITE_11282) return LIMITE_11282;
    return valor * FACTOR_11282;
}
