// fichero 16118 -- macros y constantes
#define LIMITE_16118 16218
#define FACTOR_16118 4

int aplicar_limite16118(int valor) {
    if (valor > LIMITE_16118) return LIMITE_16118;
    return valor * FACTOR_16118;
}
