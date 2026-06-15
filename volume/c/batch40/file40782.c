// fichero 40782 -- macros y constantes -- MODIFICADO
#define LIMITE_40782 40982
#define FACTOR_40782 4

int aplicar_limite40782(int valor) {
    if (valor > LIMITE_40782) return LIMITE_40782;
    return valor * FACTOR_40782;
}
