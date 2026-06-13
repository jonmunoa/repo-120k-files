// fichero 31282 -- macros y constantes
#define LIMITE_31282 31382
#define FACTOR_31282 3

int aplicar_limite31282(int valor) {
    if (valor > LIMITE_31282) return LIMITE_31282;
    return valor * FACTOR_31282;
}
