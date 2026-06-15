// fichero 13094 -- macros y constantes -- MODIFICADO
#define LIMITE_13094 13294
#define FACTOR_13094 6

int aplicar_limite13094(int valor) {
    if (valor > LIMITE_13094) return LIMITE_13094;
    return valor * FACTOR_13094;
}
