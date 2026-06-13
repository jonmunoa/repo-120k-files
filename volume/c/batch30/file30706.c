// fichero 30706 -- macros y constantes
#define LIMITE_30706 30806
#define FACTOR_30706 2

int aplicar_limite30706(int valor) {
    if (valor > LIMITE_30706) return LIMITE_30706;
    return valor * FACTOR_30706;
}
