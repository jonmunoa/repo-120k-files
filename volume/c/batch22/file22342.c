// fichero 22342 -- macros y constantes -- MODIFICADO
#define LIMITE_22342 22542
#define FACTOR_22342 4

int aplicar_limite22342(int valor) {
    if (valor > LIMITE_22342) return LIMITE_22342;
    return valor * FACTOR_22342;
}
