// fichero 41910 -- macros y constantes
#define LIMITE_41910 42010
#define FACTOR_41910 1

int aplicar_limite41910(int valor) {
    if (valor > LIMITE_41910) return LIMITE_41910;
    return valor * FACTOR_41910;
}
