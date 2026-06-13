// fichero 10622 -- macros y constantes
#define LIMITE_10622 10722
#define FACTOR_10622 3

int aplicar_limite10622(int valor) {
    if (valor > LIMITE_10622) return LIMITE_10622;
    return valor * FACTOR_10622;
}
