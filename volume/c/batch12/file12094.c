// fichero 12094 -- macros y constantes
#define LIMITE_12094 12194
#define FACTOR_12094 5

int aplicar_limite12094(int valor) {
    if (valor > LIMITE_12094) return LIMITE_12094;
    return valor * FACTOR_12094;
}
