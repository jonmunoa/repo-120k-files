// fichero 6602 -- macros y constantes -- MODIFICADO
#define LIMITE_6602 6802
#define FACTOR_6602 4

int aplicar_limite6602(int valor) {
    if (valor > LIMITE_6602) return LIMITE_6602;
    return valor * FACTOR_6602;
}
