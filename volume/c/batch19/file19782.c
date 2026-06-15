// fichero 19782 -- macros y constantes -- MODIFICADO
#define LIMITE_19782 19982
#define FACTOR_19782 4

int aplicar_limite19782(int valor) {
    if (valor > LIMITE_19782) return LIMITE_19782;
    return valor * FACTOR_19782;
}
