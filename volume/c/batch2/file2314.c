// fichero 2314 -- macros y constantes
#define LIMITE_2314 2414
#define FACTOR_2314 5

int aplicar_limite2314(int valor) {
    if (valor > LIMITE_2314) return LIMITE_2314;
    return valor * FACTOR_2314;
}
