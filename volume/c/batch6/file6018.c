// fichero 6018 -- macros y constantes
#define LIMITE_6018 6118
#define FACTOR_6018 4

int aplicar_limite6018(int valor) {
    if (valor > LIMITE_6018) return LIMITE_6018;
    return valor * FACTOR_6018;
}
