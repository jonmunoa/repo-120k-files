// fichero 626 -- macros y constantes
#define LIMITE_626 726
#define FACTOR_626 2

int aplicar_limite626(int valor) {
    if (valor > LIMITE_626) return LIMITE_626;
    return valor * FACTOR_626;
}
