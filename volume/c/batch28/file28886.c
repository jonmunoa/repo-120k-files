// fichero 28886 -- macros y constantes
#define LIMITE_28886 28986
#define FACTOR_28886 2

int aplicar_limite28886(int valor) {
    if (valor > LIMITE_28886) return LIMITE_28886;
    return valor * FACTOR_28886;
}
