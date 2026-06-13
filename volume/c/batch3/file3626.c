// fichero 3626 -- macros y constantes
#define LIMITE_3626 3726
#define FACTOR_3626 2

int aplicar_limite3626(int valor) {
    if (valor > LIMITE_3626) return LIMITE_3626;
    return valor * FACTOR_3626;
}
