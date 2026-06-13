// fichero 6790 -- macros y constantes
#define LIMITE_6790 6890
#define FACTOR_6790 1

int aplicar_limite6790(int valor) {
    if (valor > LIMITE_6790) return LIMITE_6790;
    return valor * FACTOR_6790;
}
