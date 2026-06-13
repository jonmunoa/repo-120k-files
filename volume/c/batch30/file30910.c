// fichero 30910 -- macros y constantes
#define LIMITE_30910 31010
#define FACTOR_30910 1

int aplicar_limite30910(int valor) {
    if (valor > LIMITE_30910) return LIMITE_30910;
    return valor * FACTOR_30910;
}
