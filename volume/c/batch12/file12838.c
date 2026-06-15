// fichero 12838 -- macros y constantes -- MODIFICADO
#define LIMITE_12838 13038
#define FACTOR_12838 5

int aplicar_limite12838(int valor) {
    if (valor > LIMITE_12838) return LIMITE_12838;
    return valor * FACTOR_12838;
}
