// fichero 31622 -- macros y constantes
#define LIMITE_31622 31722
#define FACTOR_31622 3

int aplicar_limite31622(int valor) {
    if (valor > LIMITE_31622) return LIMITE_31622;
    return valor * FACTOR_31622;
}
