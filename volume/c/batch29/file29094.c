// fichero 29094 -- macros y constantes
#define LIMITE_29094 29194
#define FACTOR_29094 5

int aplicar_limite29094(int valor) {
    if (valor > LIMITE_29094) return LIMITE_29094;
    return valor * FACTOR_29094;
}
