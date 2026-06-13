// fichero 13626 -- macros y constantes
#define LIMITE_13626 13726
#define FACTOR_13626 2

int aplicar_limite13626(int valor) {
    if (valor > LIMITE_13626) return LIMITE_13626;
    return valor * FACTOR_13626;
}
