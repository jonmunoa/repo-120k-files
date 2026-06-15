// fichero 45782 -- macros y constantes -- MODIFICADO
#define LIMITE_45782 45982
#define FACTOR_45782 4

int aplicar_limite45782(int valor) {
    if (valor > LIMITE_45782) return LIMITE_45782;
    return valor * FACTOR_45782;
}
