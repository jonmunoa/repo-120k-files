// fichero 4114 -- macros y constantes -- MODIFICADO
#define LIMITE_4114 4314
#define FACTOR_4114 6

int aplicar_limite4114(int valor) {
    if (valor > LIMITE_4114) return LIMITE_4114;
    return valor * FACTOR_4114;
}
