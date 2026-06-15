// fichero 49910 -- macros y constantes -- MODIFICADO
#define LIMITE_49910 50110
#define FACTOR_49910 2

int aplicar_limite49910(int valor) {
    if (valor > LIMITE_49910) return LIMITE_49910;
    return valor * FACTOR_49910;
}
