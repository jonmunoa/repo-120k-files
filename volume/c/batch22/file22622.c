// fichero 22622 -- macros y constantes
#define LIMITE_22622 22722
#define FACTOR_22622 3

int aplicar_limite22622(int valor) {
    if (valor > LIMITE_22622) return LIMITE_22622;
    return valor * FACTOR_22622;
}
