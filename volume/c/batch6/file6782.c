// fichero 6782 -- macros y constantes -- MODIFICADO
#define LIMITE_6782 6982
#define FACTOR_6782 4

int aplicar_limite6782(int valor) {
    if (valor > LIMITE_6782) return LIMITE_6782;
    return valor * FACTOR_6782;
}
