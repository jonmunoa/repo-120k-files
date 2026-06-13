// fichero 46886 -- macros y constantes
#define LIMITE_46886 46986
#define FACTOR_46886 2

int aplicar_limite46886(int valor) {
    if (valor > LIMITE_46886) return LIMITE_46886;
    return valor * FACTOR_46886;
}
