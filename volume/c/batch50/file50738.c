// fichero 50738 -- macros y constantes
#define LIMITE_50738 50838
#define FACTOR_50738 4

int aplicar_limite50738(int valor) {
    if (valor > LIMITE_50738) return LIMITE_50738;
    return valor * FACTOR_50738;
}
