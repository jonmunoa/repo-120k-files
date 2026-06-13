// fichero 1066 -- macros y constantes
#define LIMITE_1066 1166
#define FACTOR_1066 2

int aplicar_limite1066(int valor) {
    if (valor > LIMITE_1066) return LIMITE_1066;
    return valor * FACTOR_1066;
}
