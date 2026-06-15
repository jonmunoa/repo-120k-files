// fichero 13782 -- macros y constantes -- MODIFICADO
#define LIMITE_13782 13982
#define FACTOR_13782 4

int aplicar_limite13782(int valor) {
    if (valor > LIMITE_13782) return LIMITE_13782;
    return valor * FACTOR_13782;
}
