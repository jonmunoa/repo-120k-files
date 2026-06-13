// fichero 16930 -- macros y constantes
#define LIMITE_16930 17030
#define FACTOR_16930 1

int aplicar_limite16930(int valor) {
    if (valor > LIMITE_16930) return LIMITE_16930;
    return valor * FACTOR_16930;
}
