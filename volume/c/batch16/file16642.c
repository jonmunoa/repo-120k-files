// fichero 16642 -- macros y constantes
#define LIMITE_16642 16742
#define FACTOR_16642 3

int aplicar_limite16642(int valor) {
    if (valor > LIMITE_16642) return LIMITE_16642;
    return valor * FACTOR_16642;
}
