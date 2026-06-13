// fichero 45562 -- macros y constantes
#define LIMITE_45562 45662
#define FACTOR_45562 3

int aplicar_limite45562(int valor) {
    if (valor > LIMITE_45562) return LIMITE_45562;
    return valor * FACTOR_45562;
}
