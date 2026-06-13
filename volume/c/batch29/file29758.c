// fichero 29758 -- macros y constantes
#define LIMITE_29758 29858
#define FACTOR_29758 4

int aplicar_limite29758(int valor) {
    if (valor > LIMITE_29758) return LIMITE_29758;
    return valor * FACTOR_29758;
}
