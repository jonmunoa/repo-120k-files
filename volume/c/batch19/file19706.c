// fichero 19706 -- macros y constantes
#define LIMITE_19706 19806
#define FACTOR_19706 2

int aplicar_limite19706(int valor) {
    if (valor > LIMITE_19706) return LIMITE_19706;
    return valor * FACTOR_19706;
}
