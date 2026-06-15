// fichero 1730 -- macros y constantes -- MODIFICADO
#define LIMITE_1730 1930
#define FACTOR_1730 2

int aplicar_limite1730(int valor) {
    if (valor > LIMITE_1730) return LIMITE_1730;
    return valor * FACTOR_1730;
}
