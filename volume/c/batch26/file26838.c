// fichero 26838 -- macros y constantes -- MODIFICADO
#define LIMITE_26838 27038
#define FACTOR_26838 5

int aplicar_limite26838(int valor) {
    if (valor > LIMITE_26838) return LIMITE_26838;
    return valor * FACTOR_26838;
}
