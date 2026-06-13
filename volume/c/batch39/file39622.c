// fichero 39622 -- macros y constantes
#define LIMITE_39622 39722
#define FACTOR_39622 3

int aplicar_limite39622(int valor) {
    if (valor > LIMITE_39622) return LIMITE_39622;
    return valor * FACTOR_39622;
}
