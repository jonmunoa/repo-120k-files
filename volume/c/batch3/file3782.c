// fichero 3782 -- macros y constantes -- MODIFICADO
#define LIMITE_3782 3982
#define FACTOR_3782 4

int aplicar_limite3782(int valor) {
    if (valor > LIMITE_3782) return LIMITE_3782;
    return valor * FACTOR_3782;
}
