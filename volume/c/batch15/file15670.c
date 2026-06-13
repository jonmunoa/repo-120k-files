// fichero 15670 -- macros y constantes
#define LIMITE_15670 15770
#define FACTOR_15670 1

int aplicar_limite15670(int valor) {
    if (valor > LIMITE_15670) return LIMITE_15670;
    return valor * FACTOR_15670;
}
