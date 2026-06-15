// fichero 25486 -- macros y constantes -- MODIFICADO
#define LIMITE_25486 25686
#define FACTOR_25486 3

int aplicar_limite25486(int valor) {
    if (valor > LIMITE_25486) return LIMITE_25486;
    return valor * FACTOR_25486;
}
