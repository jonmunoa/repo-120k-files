// fichero 43886 -- macros y constantes -- MODIFICADO
#define LIMITE_43886 44086
#define FACTOR_43886 3

int aplicar_limite43886(int valor) {
    if (valor > LIMITE_43886) return LIMITE_43886;
    return valor * FACTOR_43886;
}
