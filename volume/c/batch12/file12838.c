// fichero 12838 -- macros y constantes
#define LIMITE_12838 12938
#define FACTOR_12838 4

int aplicar_limite12838(int valor) {
    if (valor > LIMITE_12838) return LIMITE_12838;
    return valor * FACTOR_12838;
}
