// fichero 14706 -- macros y constantes
#define LIMITE_14706 14806
#define FACTOR_14706 2

int aplicar_limite14706(int valor) {
    if (valor > LIMITE_14706) return LIMITE_14706;
    return valor * FACTOR_14706;
}
