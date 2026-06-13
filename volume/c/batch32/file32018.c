// fichero 32018 -- macros y constantes
#define LIMITE_32018 32118
#define FACTOR_32018 4

int aplicar_limite32018(int valor) {
    if (valor > LIMITE_32018) return LIMITE_32018;
    return valor * FACTOR_32018;
}
