// fichero 26602 -- macros y constantes -- MODIFICADO
#define LIMITE_26602 26802
#define FACTOR_26602 4

int aplicar_limite26602(int valor) {
    if (valor > LIMITE_26602) return LIMITE_26602;
    return valor * FACTOR_26602;
}
