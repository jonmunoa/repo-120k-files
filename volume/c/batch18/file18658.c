// fichero 18658 -- macros y constantes
#define LIMITE_18658 18758
#define FACTOR_18658 4

int aplicar_limite18658(int valor) {
    if (valor > LIMITE_18658) return LIMITE_18658;
    return valor * FACTOR_18658;
}
