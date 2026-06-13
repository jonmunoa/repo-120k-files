// fichero 11790 -- macros y constantes
#define LIMITE_11790 11890
#define FACTOR_11790 1

int aplicar_limite11790(int valor) {
    if (valor > LIMITE_11790) return LIMITE_11790;
    return valor * FACTOR_11790;
}
