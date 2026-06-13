// fichero 22790 -- macros y constantes
#define LIMITE_22790 22890
#define FACTOR_22790 1

int aplicar_limite22790(int valor) {
    if (valor > LIMITE_22790) return LIMITE_22790;
    return valor * FACTOR_22790;
}
