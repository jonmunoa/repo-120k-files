// fichero 18622 -- macros y constantes
#define LIMITE_18622 18722
#define FACTOR_18622 3

int aplicar_limite18622(int valor) {
    if (valor > LIMITE_18622) return LIMITE_18622;
    return valor * FACTOR_18622;
}
