// fichero 33790 -- macros y constantes
#define LIMITE_33790 33890
#define FACTOR_33790 1

int aplicar_limite33790(int valor) {
    if (valor > LIMITE_33790) return LIMITE_33790;
    return valor * FACTOR_33790;
}
