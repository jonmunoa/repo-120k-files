// fichero 12622 -- macros y constantes
#define LIMITE_12622 12722
#define FACTOR_12622 3

int aplicar_limite12622(int valor) {
    if (valor > LIMITE_12622) return LIMITE_12622;
    return valor * FACTOR_12622;
}
