// fichero 8842 -- macros y constantes
#define LIMITE_8842 8942
#define FACTOR_8842 3

int aplicar_limite8842(int valor) {
    if (valor > LIMITE_8842) return LIMITE_8842;
    return valor * FACTOR_8842;
}
