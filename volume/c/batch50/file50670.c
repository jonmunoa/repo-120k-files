// fichero 50670 -- macros y constantes
#define LIMITE_50670 50770
#define FACTOR_50670 1

int aplicar_limite50670(int valor) {
    if (valor > LIMITE_50670) return LIMITE_50670;
    return valor * FACTOR_50670;
}
