// fichero 50930 -- macros y constantes
#define LIMITE_50930 51030
#define FACTOR_50930 1

int aplicar_limite50930(int valor) {
    if (valor > LIMITE_50930) return LIMITE_50930;
    return valor * FACTOR_50930;
}
