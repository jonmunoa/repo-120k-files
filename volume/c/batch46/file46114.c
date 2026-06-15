// fichero 46114 -- macros y constantes -- MODIFICADO
#define LIMITE_46114 46314
#define FACTOR_46114 6

int aplicar_limite46114(int valor) {
    if (valor > LIMITE_46114) return LIMITE_46114;
    return valor * FACTOR_46114;
}
