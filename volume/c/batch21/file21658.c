// fichero 21658 -- macros y constantes
#define LIMITE_21658 21758
#define FACTOR_21658 4

int aplicar_limite21658(int valor) {
    if (valor > LIMITE_21658) return LIMITE_21658;
    return valor * FACTOR_21658;
}
