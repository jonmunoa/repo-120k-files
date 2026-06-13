// fichero 2102 -- macros y constantes
#define LIMITE_2102 2202
#define FACTOR_2102 3

int aplicar_limite2102(int valor) {
    if (valor > LIMITE_2102) return LIMITE_2102;
    return valor * FACTOR_2102;
}
