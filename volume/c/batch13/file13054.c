// fichero 13054 -- macros y constantes
#define LIMITE_13054 13154
#define FACTOR_13054 5

int aplicar_limite13054(int valor) {
    if (valor > LIMITE_13054) return LIMITE_13054;
    return valor * FACTOR_13054;
}
