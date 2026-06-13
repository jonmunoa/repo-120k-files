// fichero 21626 -- macros y constantes
#define LIMITE_21626 21726
#define FACTOR_21626 2

int aplicar_limite21626(int valor) {
    if (valor > LIMITE_21626) return LIMITE_21626;
    return valor * FACTOR_21626;
}
