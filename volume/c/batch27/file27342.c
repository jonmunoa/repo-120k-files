// fichero 27342 -- macros y constantes -- MODIFICADO
#define LIMITE_27342 27542
#define FACTOR_27342 4

int aplicar_limite27342(int valor) {
    if (valor > LIMITE_27342) return LIMITE_27342;
    return valor * FACTOR_27342;
}
