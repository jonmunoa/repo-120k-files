// fichero 13094 -- macros y constantes
#define LIMITE_13094 13194
#define FACTOR_13094 5

int aplicar_limite13094(int valor) {
    if (valor > LIMITE_13094) return LIMITE_13094;
    return valor * FACTOR_13094;
}
