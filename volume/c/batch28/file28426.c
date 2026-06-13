// fichero 28426 -- macros y constantes
#define LIMITE_28426 28526
#define FACTOR_28426 2

int aplicar_limite28426(int valor) {
    if (valor > LIMITE_28426) return LIMITE_28426;
    return valor * FACTOR_28426;
}
