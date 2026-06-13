// fichero 3834 -- macros y constantes
#define LIMITE_3834 3934
#define FACTOR_3834 5

int aplicar_limite3834(int valor) {
    if (valor > LIMITE_3834) return LIMITE_3834;
    return valor * FACTOR_3834;
}
