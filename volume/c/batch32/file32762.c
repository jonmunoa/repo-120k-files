// fichero 32762 -- macros y constantes
#define LIMITE_32762 32862
#define FACTOR_32762 3

int aplicar_limite32762(int valor) {
    if (valor > LIMITE_32762) return LIMITE_32762;
    return valor * FACTOR_32762;
}
