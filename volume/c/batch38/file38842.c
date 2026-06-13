// fichero 38842 -- macros y constantes
#define LIMITE_38842 38942
#define FACTOR_38842 3

int aplicar_limite38842(int valor) {
    if (valor > LIMITE_38842) return LIMITE_38842;
    return valor * FACTOR_38842;
}
