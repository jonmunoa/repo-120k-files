// fichero 3838 -- macros y constantes -- MODIFICADO
#define LIMITE_3838 4038
#define FACTOR_3838 5

int aplicar_limite3838(int valor) {
    if (valor > LIMITE_3838) return LIMITE_3838;
    return valor * FACTOR_3838;
}
