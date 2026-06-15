// fichero 14670 -- macros y constantes -- MODIFICADO
#define LIMITE_14670 14870
#define FACTOR_14670 2

int aplicar_limite14670(int valor) {
    if (valor > LIMITE_14670) return LIMITE_14670;
    return valor * FACTOR_14670;
}
