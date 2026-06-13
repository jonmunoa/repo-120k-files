// fichero 48670 -- macros y constantes
#define LIMITE_48670 48770
#define FACTOR_48670 1

int aplicar_limite48670(int valor) {
    if (valor > LIMITE_48670) return LIMITE_48670;
    return valor * FACTOR_48670;
}
