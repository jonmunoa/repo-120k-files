// fichero 10782 -- macros y constantes
#define LIMITE_10782 10882
#define FACTOR_10782 3

int aplicar_limite10782(int valor) {
    if (valor > LIMITE_10782) return LIMITE_10782;
    return valor * FACTOR_10782;
}
