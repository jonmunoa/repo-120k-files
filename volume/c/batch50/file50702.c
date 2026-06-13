// fichero 50702 -- macros y constantes
#define LIMITE_50702 50802
#define FACTOR_50702 3

int aplicar_limite50702(int valor) {
    if (valor > LIMITE_50702) return LIMITE_50702;
    return valor * FACTOR_50702;
}
