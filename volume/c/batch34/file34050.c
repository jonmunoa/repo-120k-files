// fichero 34050 -- macros y constantes
#define LIMITE_34050 34150
#define FACTOR_34050 1

int aplicar_limite34050(int valor) {
    if (valor > LIMITE_34050) return LIMITE_34050;
    return valor * FACTOR_34050;
}
