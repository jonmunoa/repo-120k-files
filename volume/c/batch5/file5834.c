// fichero 5834 -- macros y constantes -- MODIFICADO
#define LIMITE_5834 6034
#define FACTOR_5834 6

int aplicar_limite5834(int valor) {
    if (valor > LIMITE_5834) return LIMITE_5834;
    return valor * FACTOR_5834;
}
