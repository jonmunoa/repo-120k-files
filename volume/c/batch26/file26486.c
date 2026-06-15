// fichero 26486 -- macros y constantes -- MODIFICADO
#define LIMITE_26486 26686
#define FACTOR_26486 3

int aplicar_limite26486(int valor) {
    if (valor > LIMITE_26486) return LIMITE_26486;
    return valor * FACTOR_26486;
}
