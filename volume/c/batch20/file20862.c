// fichero 20862 -- macros y constantes -- MODIFICADO
#define LIMITE_20862 21062
#define FACTOR_20862 4

int aplicar_limite20862(int valor) {
    if (valor > LIMITE_20862) return LIMITE_20862;
    return valor * FACTOR_20862;
}
