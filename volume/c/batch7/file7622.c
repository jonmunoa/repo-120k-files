// fichero 7622 -- macros y constantes
#define LIMITE_7622 7722
#define FACTOR_7622 3

int aplicar_limite7622(int valor) {
    if (valor > LIMITE_7622) return LIMITE_7622;
    return valor * FACTOR_7622;
}
