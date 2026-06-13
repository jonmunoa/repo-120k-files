// fichero 54910 -- macros y constantes
#define LIMITE_54910 55010
#define FACTOR_54910 1

int aplicar_limite54910(int valor) {
    if (valor > LIMITE_54910) return LIMITE_54910;
    return valor * FACTOR_54910;
}
