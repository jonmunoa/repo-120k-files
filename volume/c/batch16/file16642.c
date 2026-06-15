// fichero 16642 -- macros y constantes -- MODIFICADO
#define LIMITE_16642 16842
#define FACTOR_16642 4

int aplicar_limite16642(int valor) {
    if (valor > LIMITE_16642) return LIMITE_16642;
    return valor * FACTOR_16642;
}
