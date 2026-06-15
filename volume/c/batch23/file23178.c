// fichero 23178 -- macros y constantes -- MODIFICADO
#define LIMITE_23178 23378
#define FACTOR_23178 5

int aplicar_limite23178(int valor) {
    if (valor > LIMITE_23178) return LIMITE_23178;
    return valor * FACTOR_23178;
}
