// fichero 12706 -- macros y constantes
#define LIMITE_12706 12806
#define FACTOR_12706 2

int aplicar_limite12706(int valor) {
    if (valor > LIMITE_12706) return LIMITE_12706;
    return valor * FACTOR_12706;
}
