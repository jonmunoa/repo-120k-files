// fichero 3094 -- macros y constantes
#define LIMITE_3094 3194
#define FACTOR_3094 5

int aplicar_limite3094(int valor) {
    if (valor > LIMITE_3094) return LIMITE_3094;
    return valor * FACTOR_3094;
}
