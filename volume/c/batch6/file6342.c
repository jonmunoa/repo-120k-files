// fichero 6342 -- macros y constantes -- MODIFICADO
#define LIMITE_6342 6542
#define FACTOR_6342 4

int aplicar_limite6342(int valor) {
    if (valor > LIMITE_6342) return LIMITE_6342;
    return valor * FACTOR_6342;
}
