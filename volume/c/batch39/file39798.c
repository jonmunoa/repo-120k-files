// fichero 39798 -- macros y constantes
#define LIMITE_39798 39898
#define FACTOR_39798 4

int aplicar_limite39798(int valor) {
    if (valor > LIMITE_39798) return LIMITE_39798;
    return valor * FACTOR_39798;
}
