// fichero 22838 -- macros y constantes -- MODIFICADO
#define LIMITE_22838 23038
#define FACTOR_22838 5

int aplicar_limite22838(int valor) {
    if (valor > LIMITE_22838) return LIMITE_22838;
    return valor * FACTOR_22838;
}
