// fichero 21758 -- macros y constantes
#define LIMITE_21758 21858
#define FACTOR_21758 4

int aplicar_limite21758(int valor) {
    if (valor > LIMITE_21758) return LIMITE_21758;
    return valor * FACTOR_21758;
}
