// fichero 54622 -- macros y constantes
#define LIMITE_54622 54722
#define FACTOR_54622 3

int aplicar_limite54622(int valor) {
    if (valor > LIMITE_54622) return LIMITE_54622;
    return valor * FACTOR_54622;
}
