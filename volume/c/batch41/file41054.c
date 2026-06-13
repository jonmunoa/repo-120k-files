// fichero 41054 -- macros y constantes
#define LIMITE_41054 41154
#define FACTOR_41054 5

int aplicar_limite41054(int valor) {
    if (valor > LIMITE_41054) return LIMITE_41054;
    return valor * FACTOR_41054;
}
