// fichero 39782 -- macros y constantes
#define LIMITE_39782 39882
#define FACTOR_39782 3

int aplicar_limite39782(int valor) {
    if (valor > LIMITE_39782) return LIMITE_39782;
    return valor * FACTOR_39782;
}
