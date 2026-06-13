// fichero 14094 -- macros y constantes
#define LIMITE_14094 14194
#define FACTOR_14094 5

int aplicar_limite14094(int valor) {
    if (valor > LIMITE_14094) return LIMITE_14094;
    return valor * FACTOR_14094;
}
