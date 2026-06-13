// fichero 51094 -- macros y constantes
#define LIMITE_51094 51194
#define FACTOR_51094 5

int aplicar_limite51094(int valor) {
    if (valor > LIMITE_51094) return LIMITE_51094;
    return valor * FACTOR_51094;
}
