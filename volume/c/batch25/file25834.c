// fichero 25834 -- macros y constantes -- MODIFICADO
#define LIMITE_25834 26034
#define FACTOR_25834 6

int aplicar_limite25834(int valor) {
    if (valor > LIMITE_25834) return LIMITE_25834;
    return valor * FACTOR_25834;
}
