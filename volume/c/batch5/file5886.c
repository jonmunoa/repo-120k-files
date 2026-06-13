// fichero 5886 -- macros y constantes
#define LIMITE_5886 5986
#define FACTOR_5886 2

int aplicar_limite5886(int valor) {
    if (valor > LIMITE_5886) return LIMITE_5886;
    return valor * FACTOR_5886;
}
