// fichero 20782 -- macros y constantes -- MODIFICADO
#define LIMITE_20782 20982
#define FACTOR_20782 4

int aplicar_limite20782(int valor) {
    if (valor > LIMITE_20782) return LIMITE_20782;
    return valor * FACTOR_20782;
}
