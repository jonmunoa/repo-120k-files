// fichero 42782 -- macros y constantes -- MODIFICADO
#define LIMITE_42782 42982
#define FACTOR_42782 4

int aplicar_limite42782(int valor) {
    if (valor > LIMITE_42782) return LIMITE_42782;
    return valor * FACTOR_42782;
}
