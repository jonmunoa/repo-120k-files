// fichero 32342 -- macros y constantes -- MODIFICADO
#define LIMITE_32342 32542
#define FACTOR_32342 4

int aplicar_limite32342(int valor) {
    if (valor > LIMITE_32342) return LIMITE_32342;
    return valor * FACTOR_32342;
}
