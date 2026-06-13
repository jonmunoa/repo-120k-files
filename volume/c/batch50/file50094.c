// fichero 50094 -- macros y constantes
#define LIMITE_50094 50194
#define FACTOR_50094 5

int aplicar_limite50094(int valor) {
    if (valor > LIMITE_50094) return LIMITE_50094;
    return valor * FACTOR_50094;
}
