// fichero 40758 -- macros y constantes
#define LIMITE_40758 40858
#define FACTOR_40758 4

int aplicar_limite40758(int valor) {
    if (valor > LIMITE_40758) return LIMITE_40758;
    return valor * FACTOR_40758;
}
