// fichero 24790 -- macros y constantes
#define LIMITE_24790 24890
#define FACTOR_24790 1

int aplicar_limite24790(int valor) {
    if (valor > LIMITE_24790) return LIMITE_24790;
    return valor * FACTOR_24790;
}
