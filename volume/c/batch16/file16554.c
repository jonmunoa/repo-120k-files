// fichero 16554 -- macros y constantes
#define LIMITE_16554 16654
#define FACTOR_16554 5

int aplicar_limite16554(int valor) {
    if (valor > LIMITE_16554) return LIMITE_16554;
    return valor * FACTOR_16554;
}
