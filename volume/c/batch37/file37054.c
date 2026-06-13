// fichero 37054 -- macros y constantes
#define LIMITE_37054 37154
#define FACTOR_37054 5

int aplicar_limite37054(int valor) {
    if (valor > LIMITE_37054) return LIMITE_37054;
    return valor * FACTOR_37054;
}
