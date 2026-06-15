// fichero 30782 -- macros y constantes -- MODIFICADO
#define LIMITE_30782 30982
#define FACTOR_30782 4

int aplicar_limite30782(int valor) {
    if (valor > LIMITE_30782) return LIMITE_30782;
    return valor * FACTOR_30782;
}
