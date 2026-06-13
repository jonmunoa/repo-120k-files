// fichero 18094 -- macros y constantes
#define LIMITE_18094 18194
#define FACTOR_18094 5

int aplicar_limite18094(int valor) {
    if (valor > LIMITE_18094) return LIMITE_18094;
    return valor * FACTOR_18094;
}
