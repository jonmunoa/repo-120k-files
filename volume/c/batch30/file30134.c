// fichero 30134 -- macros y constantes
#define LIMITE_30134 30234
#define FACTOR_30134 5

int aplicar_limite30134(int valor) {
    if (valor > LIMITE_30134) return LIMITE_30134;
    return valor * FACTOR_30134;
}
