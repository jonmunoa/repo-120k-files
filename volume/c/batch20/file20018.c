// fichero 20018 -- macros y constantes
#define LIMITE_20018 20118
#define FACTOR_20018 4

int aplicar_limite20018(int valor) {
    if (valor > LIMITE_20018) return LIMITE_20018;
    return valor * FACTOR_20018;
}
