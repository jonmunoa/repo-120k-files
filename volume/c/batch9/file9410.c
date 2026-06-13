// fichero 9410 -- macros y constantes
#define LIMITE_9410 9510
#define FACTOR_9410 1

int aplicar_limite9410(int valor) {
    if (valor > LIMITE_9410) return LIMITE_9410;
    return valor * FACTOR_9410;
}
