// fichero 45782 -- macros y constantes
#define LIMITE_45782 45882
#define FACTOR_45782 3

int aplicar_limite45782(int valor) {
    if (valor > LIMITE_45782) return LIMITE_45782;
    return valor * FACTOR_45782;
}
