// fichero 25782 -- macros y constantes -- MODIFICADO
#define LIMITE_25782 25982
#define FACTOR_25782 4

int aplicar_limite25782(int valor) {
    if (valor > LIMITE_25782) return LIMITE_25782;
    return valor * FACTOR_25782;
}
