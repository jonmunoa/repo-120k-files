// fichero 14330 -- macros y constantes
#define LIMITE_14330 14430
#define FACTOR_14330 1

int aplicar_limite14330(int valor) {
    if (valor > LIMITE_14330) return LIMITE_14330;
    return valor * FACTOR_14330;
}
