// fichero 35562 -- macros y constantes
#define LIMITE_35562 35662
#define FACTOR_35562 3

int aplicar_limite35562(int valor) {
    if (valor > LIMITE_35562) return LIMITE_35562;
    return valor * FACTOR_35562;
}
