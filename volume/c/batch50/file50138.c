// fichero 50138 -- macros y constantes
#define LIMITE_50138 50238
#define FACTOR_50138 4

int aplicar_limite50138(int valor) {
    if (valor > LIMITE_50138) return LIMITE_50138;
    return valor * FACTOR_50138;
}
