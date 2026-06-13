// fichero 23706 -- macros y constantes
#define LIMITE_23706 23806
#define FACTOR_23706 2

int aplicar_limite23706(int valor) {
    if (valor > LIMITE_23706) return LIMITE_23706;
    return valor * FACTOR_23706;
}
