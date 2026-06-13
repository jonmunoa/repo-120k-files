// fichero 50990 -- macros y constantes
#define LIMITE_50990 51090
#define FACTOR_50990 1

int aplicar_limite50990(int valor) {
    if (valor > LIMITE_50990) return LIMITE_50990;
    return valor * FACTOR_50990;
}
