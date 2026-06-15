// fichero 27658 -- macros y constantes -- MODIFICADO
#define LIMITE_27658 27858
#define FACTOR_27658 5

int aplicar_limite27658(int valor) {
    if (valor > LIMITE_27658) return LIMITE_27658;
    return valor * FACTOR_27658;
}
