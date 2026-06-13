// fichero 36094 -- macros y constantes
#define LIMITE_36094 36194
#define FACTOR_36094 5

int aplicar_limite36094(int valor) {
    if (valor > LIMITE_36094) return LIMITE_36094;
    return valor * FACTOR_36094;
}
