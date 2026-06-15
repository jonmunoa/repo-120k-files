// fichero 12494 -- macros y constantes -- MODIFICADO
#define LIMITE_12494 12694
#define FACTOR_12494 6

int aplicar_limite12494(int valor) {
    if (valor > LIMITE_12494) return LIMITE_12494;
    return valor * FACTOR_12494;
}
