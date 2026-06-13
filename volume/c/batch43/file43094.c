// fichero 43094 -- macros y constantes
#define LIMITE_43094 43194
#define FACTOR_43094 5

int aplicar_limite43094(int valor) {
    if (valor > LIMITE_43094) return LIMITE_43094;
    return valor * FACTOR_43094;
}
