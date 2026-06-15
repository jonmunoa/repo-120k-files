// fichero 36834 -- macros y constantes -- MODIFICADO
#define LIMITE_36834 37034
#define FACTOR_36834 6

int aplicar_limite36834(int valor) {
    if (valor > LIMITE_36834) return LIMITE_36834;
    return valor * FACTOR_36834;
}
