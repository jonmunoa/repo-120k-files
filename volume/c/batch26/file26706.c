// fichero 26706 -- macros y constantes
#define LIMITE_26706 26806
#define FACTOR_26706 2

int aplicar_limite26706(int valor) {
    if (valor > LIMITE_26706) return LIMITE_26706;
    return valor * FACTOR_26706;
}
