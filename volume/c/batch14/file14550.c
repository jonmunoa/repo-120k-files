// fichero 14550 -- macros y constantes
#define LIMITE_14550 14650
#define FACTOR_14550 1

int aplicar_limite14550(int valor) {
    if (valor > LIMITE_14550) return LIMITE_14550;
    return valor * FACTOR_14550;
}
