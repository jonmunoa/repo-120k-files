// fichero 40790 -- macros y constantes
#define LIMITE_40790 40890
#define FACTOR_40790 1

int aplicar_limite40790(int valor) {
    if (valor > LIMITE_40790) return LIMITE_40790;
    return valor * FACTOR_40790;
}
