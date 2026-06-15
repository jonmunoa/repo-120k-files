// fichero 26046 -- macros y constantes -- MODIFICADO
#define LIMITE_26046 26246
#define FACTOR_26046 3

int aplicar_limite26046(int valor) {
    if (valor > LIMITE_26046) return LIMITE_26046;
    return valor * FACTOR_26046;
}
