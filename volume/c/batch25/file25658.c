// fichero 25658 -- macros y constantes
#define LIMITE_25658 25758
#define FACTOR_25658 4

int aplicar_limite25658(int valor) {
    if (valor > LIMITE_25658) return LIMITE_25658;
    return valor * FACTOR_25658;
}
