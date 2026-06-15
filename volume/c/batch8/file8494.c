// fichero 8494 -- macros y constantes -- MODIFICADO
#define LIMITE_8494 8694
#define FACTOR_8494 6

int aplicar_limite8494(int valor) {
    if (valor > LIMITE_8494) return LIMITE_8494;
    return valor * FACTOR_8494;
}
