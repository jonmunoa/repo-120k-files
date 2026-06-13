// fichero 43886 -- macros y constantes
#define LIMITE_43886 43986
#define FACTOR_43886 2

int aplicar_limite43886(int valor) {
    if (valor > LIMITE_43886) return LIMITE_43886;
    return valor * FACTOR_43886;
}
