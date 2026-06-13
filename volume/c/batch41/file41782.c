// fichero 41782 -- macros y constantes
#define LIMITE_41782 41882
#define FACTOR_41782 3

int aplicar_limite41782(int valor) {
    if (valor > LIMITE_41782) return LIMITE_41782;
    return valor * FACTOR_41782;
}
