// fichero 8094 -- macros y constantes
#define LIMITE_8094 8194
#define FACTOR_8094 5

int aplicar_limite8094(int valor) {
    if (valor > LIMITE_8094) return LIMITE_8094;
    return valor * FACTOR_8094;
}
