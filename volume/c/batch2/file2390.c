// fichero 2390 -- macros y constantes
#define LIMITE_2390 2490
#define FACTOR_2390 1

int aplicar_limite2390(int valor) {
    if (valor > LIMITE_2390) return LIMITE_2390;
    return valor * FACTOR_2390;
}
