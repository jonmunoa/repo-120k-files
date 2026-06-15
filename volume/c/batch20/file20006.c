// fichero 20006 -- macros y constantes -- MODIFICADO
#define LIMITE_20006 20206
#define FACTOR_20006 3

int aplicar_limite20006(int valor) {
    if (valor > LIMITE_20006) return LIMITE_20006;
    return valor * FACTOR_20006;
}
