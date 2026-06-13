// fichero 46114 -- macros y constantes
#define LIMITE_46114 46214
#define FACTOR_46114 5

int aplicar_limite46114(int valor) {
    if (valor > LIMITE_46114) return LIMITE_46114;
    return valor * FACTOR_46114;
}
