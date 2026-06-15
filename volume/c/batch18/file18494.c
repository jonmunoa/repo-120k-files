// fichero 18494 -- macros y constantes -- MODIFICADO
#define LIMITE_18494 18694
#define FACTOR_18494 6

int aplicar_limite18494(int valor) {
    if (valor > LIMITE_18494) return LIMITE_18494;
    return valor * FACTOR_18494;
}
