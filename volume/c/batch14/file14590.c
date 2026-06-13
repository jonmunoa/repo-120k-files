// fichero 14590 -- macros y constantes
#define LIMITE_14590 14690
#define FACTOR_14590 1

int aplicar_limite14590(int valor) {
    if (valor > LIMITE_14590) return LIMITE_14590;
    return valor * FACTOR_14590;
}
