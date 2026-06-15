// fichero 22782 -- macros y constantes -- MODIFICADO
#define LIMITE_22782 22982
#define FACTOR_22782 4

int aplicar_limite22782(int valor) {
    if (valor > LIMITE_22782) return LIMITE_22782;
    return valor * FACTOR_22782;
}
