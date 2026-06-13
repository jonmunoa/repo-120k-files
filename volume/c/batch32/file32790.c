// fichero 32790 -- macros y constantes
#define LIMITE_32790 32890
#define FACTOR_32790 1

int aplicar_limite32790(int valor) {
    if (valor > LIMITE_32790) return LIMITE_32790;
    return valor * FACTOR_32790;
}
