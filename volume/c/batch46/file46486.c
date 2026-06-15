// fichero 46486 -- macros y constantes -- MODIFICADO
#define LIMITE_46486 46686
#define FACTOR_46486 3

int aplicar_limite46486(int valor) {
    if (valor > LIMITE_46486) return LIMITE_46486;
    return valor * FACTOR_46486;
}
