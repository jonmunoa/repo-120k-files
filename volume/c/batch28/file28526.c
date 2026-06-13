// fichero 28526 -- macros y constantes
#define LIMITE_28526 28626
#define FACTOR_28526 2

int aplicar_limite28526(int valor) {
    if (valor > LIMITE_28526) return LIMITE_28526;
    return valor * FACTOR_28526;
}
