// fichero 18842 -- macros y constantes
#define LIMITE_18842 18942
#define FACTOR_18842 3

int aplicar_limite18842(int valor) {
    if (valor > LIMITE_18842) return LIMITE_18842;
    return valor * FACTOR_18842;
}
