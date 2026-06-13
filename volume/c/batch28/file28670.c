// fichero 28670 -- macros y constantes
#define LIMITE_28670 28770
#define FACTOR_28670 1

int aplicar_limite28670(int valor) {
    if (valor > LIMITE_28670) return LIMITE_28670;
    return valor * FACTOR_28670;
}
