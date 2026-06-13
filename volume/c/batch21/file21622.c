// fichero 21622 -- macros y constantes
#define LIMITE_21622 21722
#define FACTOR_21622 3

int aplicar_limite21622(int valor) {
    if (valor > LIMITE_21622) return LIMITE_21622;
    return valor * FACTOR_21622;
}
