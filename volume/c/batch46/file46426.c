// fichero 46426 -- macros y constantes
#define LIMITE_46426 46526
#define FACTOR_46426 2

int aplicar_limite46426(int valor) {
    if (valor > LIMITE_46426) return LIMITE_46426;
    return valor * FACTOR_46426;
}
