// fichero 50626 -- macros y constantes
#define LIMITE_50626 50726
#define FACTOR_50626 2

int aplicar_limite50626(int valor) {
    if (valor > LIMITE_50626) return LIMITE_50626;
    return valor * FACTOR_50626;
}
