// fichero 10842 -- macros y constantes
#define LIMITE_10842 10942
#define FACTOR_10842 3

int aplicar_limite10842(int valor) {
    if (valor > LIMITE_10842) return LIMITE_10842;
    return valor * FACTOR_10842;
}
