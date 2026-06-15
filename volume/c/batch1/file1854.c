// fichero 1854 -- macros y constantes -- MODIFICADO
#define LIMITE_1854 2054
#define FACTOR_1854 6

int aplicar_limite1854(int valor) {
    if (valor > LIMITE_1854) return LIMITE_1854;
    return valor * FACTOR_1854;
}
