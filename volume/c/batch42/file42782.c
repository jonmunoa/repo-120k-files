// fichero 42782 -- macros y constantes
#define LIMITE_42782 42882
#define FACTOR_42782 3

int aplicar_limite42782(int valor) {
    if (valor > LIMITE_42782) return LIMITE_42782;
    return valor * FACTOR_42782;
}
