// fichero 23602 -- macros y constantes -- MODIFICADO
#define LIMITE_23602 23802
#define FACTOR_23602 4

int aplicar_limite23602(int valor) {
    if (valor > LIMITE_23602) return LIMITE_23602;
    return valor * FACTOR_23602;
}
