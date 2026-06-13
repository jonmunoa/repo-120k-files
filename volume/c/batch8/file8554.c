// fichero 8554 -- macros y constantes
#define LIMITE_8554 8654
#define FACTOR_8554 5

int aplicar_limite8554(int valor) {
    if (valor > LIMITE_8554) return LIMITE_8554;
    return valor * FACTOR_8554;
}
