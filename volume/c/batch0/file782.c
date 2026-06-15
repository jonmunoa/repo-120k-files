// fichero 782 -- macros y constantes -- MODIFICADO
#define LIMITE_782 982
#define FACTOR_782 4

int aplicar_limite782(int valor) {
    if (valor > LIMITE_782) return LIMITE_782;
    return valor * FACTOR_782;
}
