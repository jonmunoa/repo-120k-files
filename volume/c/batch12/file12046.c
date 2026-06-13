// fichero 12046 -- macros y constantes
#define LIMITE_12046 12146
#define FACTOR_12046 2

int aplicar_limite12046(int valor) {
    if (valor > LIMITE_12046) return LIMITE_12046;
    return valor * FACTOR_12046;
}
