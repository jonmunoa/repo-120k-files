// fichero 14670 -- macros y constantes
#define LIMITE_14670 14770
#define FACTOR_14670 1

int aplicar_limite14670(int valor) {
    if (valor > LIMITE_14670) return LIMITE_14670;
    return valor * FACTOR_14670;
}
