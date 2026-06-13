// fichero 42706 -- macros y constantes
#define LIMITE_42706 42806
#define FACTOR_42706 2

int aplicar_limite42706(int valor) {
    if (valor > LIMITE_42706) return LIMITE_42706;
    return valor * FACTOR_42706;
}
