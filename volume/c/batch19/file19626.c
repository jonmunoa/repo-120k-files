// fichero 19626 -- macros y constantes
#define LIMITE_19626 19726
#define FACTOR_19626 2

int aplicar_limite19626(int valor) {
    if (valor > LIMITE_19626) return LIMITE_19626;
    return valor * FACTOR_19626;
}
