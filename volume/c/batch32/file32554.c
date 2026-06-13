// fichero 32554 -- macros y constantes
#define LIMITE_32554 32654
#define FACTOR_32554 5

int aplicar_limite32554(int valor) {
    if (valor > LIMITE_32554) return LIMITE_32554;
    return valor * FACTOR_32554;
}
