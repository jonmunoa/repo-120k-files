// fichero 3782 -- macros y constantes
#define LIMITE_3782 3882
#define FACTOR_3782 3

int aplicar_limite3782(int valor) {
    if (valor > LIMITE_3782) return LIMITE_3782;
    return valor * FACTOR_3782;
}
