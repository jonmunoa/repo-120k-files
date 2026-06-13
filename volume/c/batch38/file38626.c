// fichero 38626 -- macros y constantes
#define LIMITE_38626 38726
#define FACTOR_38626 2

int aplicar_limite38626(int valor) {
    if (valor > LIMITE_38626) return LIMITE_38626;
    return valor * FACTOR_38626;
}
