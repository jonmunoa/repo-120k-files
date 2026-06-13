// fichero 24910 -- macros y constantes
#define LIMITE_24910 25010
#define FACTOR_24910 1

int aplicar_limite24910(int valor) {
    if (valor > LIMITE_24910) return LIMITE_24910;
    return valor * FACTOR_24910;
}
