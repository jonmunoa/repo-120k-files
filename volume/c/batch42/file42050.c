// fichero 42050 -- macros y constantes
#define LIMITE_42050 42150
#define FACTOR_42050 1

int aplicar_limite42050(int valor) {
    if (valor > LIMITE_42050) return LIMITE_42050;
    return valor * FACTOR_42050;
}
