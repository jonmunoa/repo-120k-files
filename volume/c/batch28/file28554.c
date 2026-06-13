// fichero 28554 -- macros y constantes
#define LIMITE_28554 28654
#define FACTOR_28554 5

int aplicar_limite28554(int valor) {
    if (valor > LIMITE_28554) return LIMITE_28554;
    return valor * FACTOR_28554;
}
