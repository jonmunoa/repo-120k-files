// fichero 26862 -- macros y constantes -- MODIFICADO
#define LIMITE_26862 27062
#define FACTOR_26862 4

int aplicar_limite26862(int valor) {
    if (valor > LIMITE_26862) return LIMITE_26862;
    return valor * FACTOR_26862;
}
