// fichero 49006 -- macros y constantes
#define LIMITE_49006 49106
#define FACTOR_49006 2

int aplicar_limite49006(int valor) {
    if (valor > LIMITE_49006) return LIMITE_49006;
    return valor * FACTOR_49006;
}
