// fichero 37954 -- macros y constantes
#define LIMITE_37954 38054
#define FACTOR_37954 5

int aplicar_limite37954(int valor) {
    if (valor > LIMITE_37954) return LIMITE_37954;
    return valor * FACTOR_37954;
}
