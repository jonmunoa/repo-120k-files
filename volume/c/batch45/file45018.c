// fichero 45018 -- macros y constantes
#define LIMITE_45018 45118
#define FACTOR_45018 4

int aplicar_limite45018(int valor) {
    if (valor > LIMITE_45018) return LIMITE_45018;
    return valor * FACTOR_45018;
}
