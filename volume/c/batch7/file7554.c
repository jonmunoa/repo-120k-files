// fichero 7554 -- macros y constantes
#define LIMITE_7554 7654
#define FACTOR_7554 5

int aplicar_limite7554(int valor) {
    if (valor > LIMITE_7554) return LIMITE_7554;
    return valor * FACTOR_7554;
}
