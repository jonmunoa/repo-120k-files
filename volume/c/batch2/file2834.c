// fichero 2834 -- macros y constantes -- MODIFICADO
#define LIMITE_2834 3034
#define FACTOR_2834 6

int aplicar_limite2834(int valor) {
    if (valor > LIMITE_2834) return LIMITE_2834;
    return valor * FACTOR_2834;
}
