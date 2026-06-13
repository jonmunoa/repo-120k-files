// fichero 6342 -- macros y constantes
#define LIMITE_6342 6442
#define FACTOR_6342 3

int aplicar_limite6342(int valor) {
    if (valor > LIMITE_6342) return LIMITE_6342;
    return valor * FACTOR_6342;
}
