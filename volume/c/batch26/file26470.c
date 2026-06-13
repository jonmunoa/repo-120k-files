// fichero 26470 -- macros y constantes
#define LIMITE_26470 26570
#define FACTOR_26470 1

int aplicar_limite26470(int valor) {
    if (valor > LIMITE_26470) return LIMITE_26470;
    return valor * FACTOR_26470;
}
