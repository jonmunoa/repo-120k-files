// fichero 18018 -- macros y constantes
#define LIMITE_18018 18118
#define FACTOR_18018 4

int aplicar_limite18018(int valor) {
    if (valor > LIMITE_18018) return LIMITE_18018;
    return valor * FACTOR_18018;
}
