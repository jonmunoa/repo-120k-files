// fichero 3838 -- macros y constantes
#define LIMITE_3838 3938
#define FACTOR_3838 4

int aplicar_limite3838(int valor) {
    if (valor > LIMITE_3838) return LIMITE_3838;
    return valor * FACTOR_3838;
}
