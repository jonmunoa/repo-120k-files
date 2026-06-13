// fichero 34782 -- macros y constantes
#define LIMITE_34782 34882
#define FACTOR_34782 3

int aplicar_limite34782(int valor) {
    if (valor > LIMITE_34782) return LIMITE_34782;
    return valor * FACTOR_34782;
}
