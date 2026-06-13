// fichero 12790 -- macros y constantes
#define LIMITE_12790 12890
#define FACTOR_12790 1

int aplicar_limite12790(int valor) {
    if (valor > LIMITE_12790) return LIMITE_12790;
    return valor * FACTOR_12790;
}
