// fichero 49102 -- macros y constantes
#define LIMITE_49102 49202
#define FACTOR_49102 3

int aplicar_limite49102(int valor) {
    if (valor > LIMITE_49102) return LIMITE_49102;
    return valor * FACTOR_49102;
}
