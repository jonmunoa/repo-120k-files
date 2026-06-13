// fichero 30202 -- macros y constantes
#define LIMITE_30202 30302
#define FACTOR_30202 3

int aplicar_limite30202(int valor) {
    if (valor > LIMITE_30202) return LIMITE_30202;
    return valor * FACTOR_30202;
}
