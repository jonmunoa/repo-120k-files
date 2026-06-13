// fichero 28842 -- macros y constantes
#define LIMITE_28842 28942
#define FACTOR_28842 3

int aplicar_limite28842(int valor) {
    if (valor > LIMITE_28842) return LIMITE_28842;
    return valor * FACTOR_28842;
}
