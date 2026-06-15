// fichero 49006 -- macros y constantes -- MODIFICADO
#define LIMITE_49006 49206
#define FACTOR_49006 3

int aplicar_limite49006(int valor) {
    if (valor > LIMITE_49006) return LIMITE_49006;
    return valor * FACTOR_49006;
}
