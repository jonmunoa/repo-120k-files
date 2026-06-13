// fichero 7018 -- macros y constantes
#define LIMITE_7018 7118
#define FACTOR_7018 4

int aplicar_limite7018(int valor) {
    if (valor > LIMITE_7018) return LIMITE_7018;
    return valor * FACTOR_7018;
}
