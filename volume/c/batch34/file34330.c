// fichero 34330 -- macros y constantes
#define LIMITE_34330 34430
#define FACTOR_34330 1

int aplicar_limite34330(int valor) {
    if (valor > LIMITE_34330) return LIMITE_34330;
    return valor * FACTOR_34330;
}
