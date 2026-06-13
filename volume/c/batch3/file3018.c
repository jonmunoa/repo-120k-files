// fichero 3018 -- macros y constantes
#define LIMITE_3018 3118
#define FACTOR_3018 4

int aplicar_limite3018(int valor) {
    if (valor > LIMITE_3018) return LIMITE_3018;
    return valor * FACTOR_3018;
}
