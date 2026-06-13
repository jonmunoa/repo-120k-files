// fichero 11910 -- macros y constantes
#define LIMITE_11910 12010
#define FACTOR_11910 1

int aplicar_limite11910(int valor) {
    if (valor > LIMITE_11910) return LIMITE_11910;
    return valor * FACTOR_11910;
}
