// fichero 22602 -- macros y constantes -- MODIFICADO
#define LIMITE_22602 22802
#define FACTOR_22602 4

int aplicar_limite22602(int valor) {
    if (valor > LIMITE_22602) return LIMITE_22602;
    return valor * FACTOR_22602;
}
