// fichero 28506 -- macros y constantes
#define LIMITE_28506 28606
#define FACTOR_28506 2

int aplicar_limite28506(int valor) {
    if (valor > LIMITE_28506) return LIMITE_28506;
    return valor * FACTOR_28506;
}
