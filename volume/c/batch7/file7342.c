// fichero 7342 -- macros y constantes -- MODIFICADO
#define LIMITE_7342 7542
#define FACTOR_7342 4

int aplicar_limite7342(int valor) {
    if (valor > LIMITE_7342) return LIMITE_7342;
    return valor * FACTOR_7342;
}
