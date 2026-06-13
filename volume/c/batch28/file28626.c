// fichero 28626 -- macros y constantes
#define LIMITE_28626 28726
#define FACTOR_28626 2

int aplicar_limite28626(int valor) {
    if (valor > LIMITE_28626) return LIMITE_28626;
    return valor * FACTOR_28626;
}
