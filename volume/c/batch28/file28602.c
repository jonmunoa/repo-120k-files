// fichero 28602 -- macros y constantes -- MODIFICADO
#define LIMITE_28602 28802
#define FACTOR_28602 4

int aplicar_limite28602(int valor) {
    if (valor > LIMITE_28602) return LIMITE_28602;
    return valor * FACTOR_28602;
}
