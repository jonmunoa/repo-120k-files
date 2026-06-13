// fichero 29626 -- macros y constantes
#define LIMITE_29626 29726
#define FACTOR_29626 2

int aplicar_limite29626(int valor) {
    if (valor > LIMITE_29626) return LIMITE_29626;
    return valor * FACTOR_29626;
}
