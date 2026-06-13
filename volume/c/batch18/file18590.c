// fichero 18590 -- macros y constantes
#define LIMITE_18590 18690
#define FACTOR_18590 1

int aplicar_limite18590(int valor) {
    if (valor > LIMITE_18590) return LIMITE_18590;
    return valor * FACTOR_18590;
}
