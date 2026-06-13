// fichero 15790 -- macros y constantes
#define LIMITE_15790 15890
#define FACTOR_15790 1

int aplicar_limite15790(int valor) {
    if (valor > LIMITE_15790) return LIMITE_15790;
    return valor * FACTOR_15790;
}
