// fichero 11562 -- macros y constantes
#define LIMITE_11562 11662
#define FACTOR_11562 3

int aplicar_limite11562(int valor) {
    if (valor > LIMITE_11562) return LIMITE_11562;
    return valor * FACTOR_11562;
}
