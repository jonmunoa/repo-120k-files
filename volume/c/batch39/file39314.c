// fichero 39314 -- macros y constantes
#define LIMITE_39314 39414
#define FACTOR_39314 5

int aplicar_limite39314(int valor) {
    if (valor > LIMITE_39314) return LIMITE_39314;
    return valor * FACTOR_39314;
}
