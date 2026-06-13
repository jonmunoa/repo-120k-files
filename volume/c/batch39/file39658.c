// fichero 39658 -- macros y constantes
#define LIMITE_39658 39758
#define FACTOR_39658 4

int aplicar_limite39658(int valor) {
    if (valor > LIMITE_39658) return LIMITE_39658;
    return valor * FACTOR_39658;
}
