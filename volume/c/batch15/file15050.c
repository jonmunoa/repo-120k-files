// fichero 15050 -- macros y constantes
#define LIMITE_15050 15150
#define FACTOR_15050 1

int aplicar_limite15050(int valor) {
    if (valor > LIMITE_15050) return LIMITE_15050;
    return valor * FACTOR_15050;
}
