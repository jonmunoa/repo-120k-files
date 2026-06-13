// fichero 20006 -- macros y constantes
#define LIMITE_20006 20106
#define FACTOR_20006 2

int aplicar_limite20006(int valor) {
    if (valor > LIMITE_20006) return LIMITE_20006;
    return valor * FACTOR_20006;
}
