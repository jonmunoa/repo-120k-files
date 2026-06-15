// fichero 14602 -- macros y constantes -- MODIFICADO
#define LIMITE_14602 14802
#define FACTOR_14602 4

int aplicar_limite14602(int valor) {
    if (valor > LIMITE_14602) return LIMITE_14602;
    return valor * FACTOR_14602;
}
