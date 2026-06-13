// fichero 39706 -- macros y constantes
#define LIMITE_39706 39806
#define FACTOR_39706 2

int aplicar_limite39706(int valor) {
    if (valor > LIMITE_39706) return LIMITE_39706;
    return valor * FACTOR_39706;
}
