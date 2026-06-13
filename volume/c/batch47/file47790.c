// fichero 47790 -- macros y constantes
#define LIMITE_47790 47890
#define FACTOR_47790 1

int aplicar_limite47790(int valor) {
    if (valor > LIMITE_47790) return LIMITE_47790;
    return valor * FACTOR_47790;
}
