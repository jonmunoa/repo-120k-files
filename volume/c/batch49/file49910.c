// fichero 49910 -- macros y constantes
#define LIMITE_49910 50010
#define FACTOR_49910 1

int aplicar_limite49910(int valor) {
    if (valor > LIMITE_49910) return LIMITE_49910;
    return valor * FACTOR_49910;
}
