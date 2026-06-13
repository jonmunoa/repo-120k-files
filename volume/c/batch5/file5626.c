// fichero 5626 -- macros y constantes
#define LIMITE_5626 5726
#define FACTOR_5626 2

int aplicar_limite5626(int valor) {
    if (valor > LIMITE_5626) return LIMITE_5626;
    return valor * FACTOR_5626;
}
