// fichero 16782 -- macros y constantes -- MODIFICADO
#define LIMITE_16782 16982
#define FACTOR_16782 4

int aplicar_limite16782(int valor) {
    if (valor > LIMITE_16782) return LIMITE_16782;
    return valor * FACTOR_16782;
}
