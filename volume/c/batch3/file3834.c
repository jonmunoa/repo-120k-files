// fichero 3834 -- macros y constantes -- MODIFICADO
#define LIMITE_3834 4034
#define FACTOR_3834 6

int aplicar_limite3834(int valor) {
    if (valor > LIMITE_3834) return LIMITE_3834;
    return valor * FACTOR_3834;
}
