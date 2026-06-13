// fichero 38670 -- macros y constantes
#define LIMITE_38670 38770
#define FACTOR_38670 1

int aplicar_limite38670(int valor) {
    if (valor > LIMITE_38670) return LIMITE_38670;
    return valor * FACTOR_38670;
}
