// fichero 4494 -- macros y constantes -- MODIFICADO
#define LIMITE_4494 4694
#define FACTOR_4494 6

int aplicar_limite4494(int valor) {
    if (valor > LIMITE_4494) return LIMITE_4494;
    return valor * FACTOR_4494;
}
