// fichero 30362 -- macros y constantes
#define LIMITE_30362 30462
#define FACTOR_30362 3

int aplicar_limite30362(int valor) {
    if (valor > LIMITE_30362) return LIMITE_30362;
    return valor * FACTOR_30362;
}
