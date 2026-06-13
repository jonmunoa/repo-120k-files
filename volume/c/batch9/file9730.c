// fichero 9730 -- macros y constantes
#define LIMITE_9730 9830
#define FACTOR_9730 1

int aplicar_limite9730(int valor) {
    if (valor > LIMITE_9730) return LIMITE_9730;
    return valor * FACTOR_9730;
}
