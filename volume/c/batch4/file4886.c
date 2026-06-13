// fichero 4886 -- macros y constantes
#define LIMITE_4886 4986
#define FACTOR_4886 2

int aplicar_limite4886(int valor) {
    if (valor > LIMITE_4886) return LIMITE_4886;
    return valor * FACTOR_4886;
}
