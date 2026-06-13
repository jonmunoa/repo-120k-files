// fichero 21790 -- macros y constantes
#define LIMITE_21790 21890
#define FACTOR_21790 1

int aplicar_limite21790(int valor) {
    if (valor > LIMITE_21790) return LIMITE_21790;
    return valor * FACTOR_21790;
}
