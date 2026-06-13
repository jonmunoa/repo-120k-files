// fichero 5658 -- macros y constantes
#define LIMITE_5658 5758
#define FACTOR_5658 4

int aplicar_limite5658(int valor) {
    if (valor > LIMITE_5658) return LIMITE_5658;
    return valor * FACTOR_5658;
}
