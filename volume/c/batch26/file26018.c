// fichero 26018 -- macros y constantes
#define LIMITE_26018 26118
#define FACTOR_26018 4

int aplicar_limite26018(int valor) {
    if (valor > LIMITE_26018) return LIMITE_26018;
    return valor * FACTOR_26018;
}
