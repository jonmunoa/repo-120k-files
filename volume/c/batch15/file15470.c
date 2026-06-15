// fichero 15470 -- macros y constantes -- MODIFICADO
#define LIMITE_15470 15670
#define FACTOR_15470 2

int aplicar_limite15470(int valor) {
    if (valor > LIMITE_15470) return LIMITE_15470;
    return valor * FACTOR_15470;
}
