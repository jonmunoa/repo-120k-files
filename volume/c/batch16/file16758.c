// fichero 16758 -- macros y constantes
#define LIMITE_16758 16858
#define FACTOR_16758 4

int aplicar_limite16758(int valor) {
    if (valor > LIMITE_16758) return LIMITE_16758;
    return valor * FACTOR_16758;
}
