// fichero 15622 -- macros y constantes
#define LIMITE_15622 15722
#define FACTOR_15622 3

int aplicar_limite15622(int valor) {
    if (valor > LIMITE_15622) return LIMITE_15622;
    return valor * FACTOR_15622;
}
