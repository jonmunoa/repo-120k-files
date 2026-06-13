// fichero 40554 -- macros y constantes
#define LIMITE_40554 40654
#define FACTOR_40554 5

int aplicar_limite40554(int valor) {
    if (valor > LIMITE_40554) return LIMITE_40554;
    return valor * FACTOR_40554;
}
