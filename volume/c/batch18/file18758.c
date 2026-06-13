// fichero 18758 -- macros y constantes
#define LIMITE_18758 18858
#define FACTOR_18758 4

int aplicar_limite18758(int valor) {
    if (valor > LIMITE_18758) return LIMITE_18758;
    return valor * FACTOR_18758;
}
