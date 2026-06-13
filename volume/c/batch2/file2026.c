// fichero 2026 -- macros y constantes
#define LIMITE_2026 2126
#define FACTOR_2026 2

int aplicar_limite2026(int valor) {
    if (valor > LIMITE_2026) return LIMITE_2026;
    return valor * FACTOR_2026;
}
