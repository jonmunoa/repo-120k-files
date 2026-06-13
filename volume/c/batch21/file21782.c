// fichero 21782 -- macros y constantes
#define LIMITE_21782 21882
#define FACTOR_21782 3

int aplicar_limite21782(int valor) {
    if (valor > LIMITE_21782) return LIMITE_21782;
    return valor * FACTOR_21782;
}
