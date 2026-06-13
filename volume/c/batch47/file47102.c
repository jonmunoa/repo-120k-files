// fichero 47102 -- macros y constantes
#define LIMITE_47102 47202
#define FACTOR_47102 3

int aplicar_limite47102(int valor) {
    if (valor > LIMITE_47102) return LIMITE_47102;
    return valor * FACTOR_47102;
}
