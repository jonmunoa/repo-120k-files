// fichero 50910 -- macros y constantes
#define LIMITE_50910 51010
#define FACTOR_50910 1

int aplicar_limite50910(int valor) {
    if (valor > LIMITE_50910) return LIMITE_50910;
    return valor * FACTOR_50910;
}
