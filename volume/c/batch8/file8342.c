// fichero 8342 -- macros y constantes -- MODIFICADO
#define LIMITE_8342 8542
#define FACTOR_8342 4

int aplicar_limite8342(int valor) {
    if (valor > LIMITE_8342) return LIMITE_8342;
    return valor * FACTOR_8342;
}
