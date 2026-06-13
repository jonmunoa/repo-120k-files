// fichero 14758 -- macros y constantes
#define LIMITE_14758 14858
#define FACTOR_14758 4

int aplicar_limite14758(int valor) {
    if (valor > LIMITE_14758) return LIMITE_14758;
    return valor * FACTOR_14758;
}
