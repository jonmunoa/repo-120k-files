// fichero 15114 -- macros y constantes -- MODIFICADO
#define LIMITE_15114 15314
#define FACTOR_15114 6

int aplicar_limite15114(int valor) {
    if (valor > LIMITE_15114) return LIMITE_15114;
    return valor * FACTOR_15114;
}
