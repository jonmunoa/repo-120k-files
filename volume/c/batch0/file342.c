// fichero 342 -- macros y constantes -- MODIFICADO
#define LIMITE_342 542
#define FACTOR_342 4

int aplicar_limite342(int valor) {
    if (valor > LIMITE_342) return LIMITE_342;
    return valor * FACTOR_342;
}
