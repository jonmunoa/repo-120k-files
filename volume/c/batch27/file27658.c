// fichero 27658 -- macros y constantes
#define LIMITE_27658 27758
#define FACTOR_27658 4

int aplicar_limite27658(int valor) {
    if (valor > LIMITE_27658) return LIMITE_27658;
    return valor * FACTOR_27658;
}
