// fichero 28506 -- macros y constantes -- MODIFICADO
#define LIMITE_28506 28706
#define FACTOR_28506 3

int aplicar_limite28506(int valor) {
    if (valor > LIMITE_28506) return LIMITE_28506;
    return valor * FACTOR_28506;
}
