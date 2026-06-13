// fichero 29830 -- macros y constantes
#define LIMITE_29830 29930
#define FACTOR_29830 1

int aplicar_limite29830(int valor) {
    if (valor > LIMITE_29830) return LIMITE_29830;
    return valor * FACTOR_29830;
}
