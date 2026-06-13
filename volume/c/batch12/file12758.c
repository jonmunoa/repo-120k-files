// fichero 12758 -- macros y constantes
#define LIMITE_12758 12858
#define FACTOR_12758 4

int aplicar_limite12758(int valor) {
    if (valor > LIMITE_12758) return LIMITE_12758;
    return valor * FACTOR_12758;
}
