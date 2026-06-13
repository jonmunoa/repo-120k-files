// fichero 2622 -- macros y constantes
#define LIMITE_2622 2722
#define FACTOR_2622 3

int aplicar_limite2622(int valor) {
    if (valor > LIMITE_2622) return LIMITE_2622;
    return valor * FACTOR_2622;
}
