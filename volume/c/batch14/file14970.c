// fichero 14970 -- macros y constantes
#define LIMITE_14970 15070
#define FACTOR_14970 1

int aplicar_limite14970(int valor) {
    if (valor > LIMITE_14970) return LIMITE_14970;
    return valor * FACTOR_14970;
}
