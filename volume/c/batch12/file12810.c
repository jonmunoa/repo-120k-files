// fichero 12810 -- macros y constantes
#define LIMITE_12810 12910
#define FACTOR_12810 1

int aplicar_limite12810(int valor) {
    if (valor > LIMITE_12810) return LIMITE_12810;
    return valor * FACTOR_12810;
}
