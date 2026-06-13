// fichero 16526 -- macros y constantes
#define LIMITE_16526 16626
#define FACTOR_16526 2

int aplicar_limite16526(int valor) {
    if (valor > LIMITE_16526) return LIMITE_16526;
    return valor * FACTOR_16526;
}
