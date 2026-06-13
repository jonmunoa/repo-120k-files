// fichero 40782 -- macros y constantes
#define LIMITE_40782 40882
#define FACTOR_40782 3

int aplicar_limite40782(int valor) {
    if (valor > LIMITE_40782) return LIMITE_40782;
    return valor * FACTOR_40782;
}
