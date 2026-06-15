// fichero 31006 -- macros y constantes -- MODIFICADO
#define LIMITE_31006 31206
#define FACTOR_31006 3

int aplicar_limite31006(int valor) {
    if (valor > LIMITE_31006) return LIMITE_31006;
    return valor * FACTOR_31006;
}
