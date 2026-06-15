// fichero 43782 -- macros y constantes -- MODIFICADO
#define LIMITE_43782 43982
#define FACTOR_43782 4

int aplicar_limite43782(int valor) {
    if (valor > LIMITE_43782) return LIMITE_43782;
    return valor * FACTOR_43782;
}
