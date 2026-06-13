// fichero 54670 -- macros y constantes
#define LIMITE_54670 54770
#define FACTOR_54670 1

int aplicar_limite54670(int valor) {
    if (valor > LIMITE_54670) return LIMITE_54670;
    return valor * FACTOR_54670;
}
