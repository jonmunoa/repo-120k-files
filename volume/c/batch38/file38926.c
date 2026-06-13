// fichero 38926 -- macros y constantes
#define LIMITE_38926 39026
#define FACTOR_38926 2

int aplicar_limite38926(int valor) {
    if (valor > LIMITE_38926) return LIMITE_38926;
    return valor * FACTOR_38926;
}
