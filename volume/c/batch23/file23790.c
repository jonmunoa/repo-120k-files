// fichero 23790 -- macros y constantes
#define LIMITE_23790 23890
#define FACTOR_23790 1

int aplicar_limite23790(int valor) {
    if (valor > LIMITE_23790) return LIMITE_23790;
    return valor * FACTOR_23790;
}
