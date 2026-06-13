// fichero 12670 -- macros y constantes
#define LIMITE_12670 12770
#define FACTOR_12670 1

int aplicar_limite12670(int valor) {
    if (valor > LIMITE_12670) return LIMITE_12670;
    return valor * FACTOR_12670;
}
