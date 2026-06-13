// fichero 38758 -- macros y constantes
#define LIMITE_38758 38858
#define FACTOR_38758 4

int aplicar_limite38758(int valor) {
    if (valor > LIMITE_38758) return LIMITE_38758;
    return valor * FACTOR_38758;
}
