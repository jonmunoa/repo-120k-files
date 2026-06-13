// fichero 28930 -- macros y constantes
#define LIMITE_28930 29030
#define FACTOR_28930 1

int aplicar_limite28930(int valor) {
    if (valor > LIMITE_28930) return LIMITE_28930;
    return valor * FACTOR_28930;
}
