// fichero 53626 -- macros y constantes
#define LIMITE_53626 53726
#define FACTOR_53626 2

int aplicar_limite53626(int valor) {
    if (valor > LIMITE_53626) return LIMITE_53626;
    return valor * FACTOR_53626;
}
