// fichero 51622 -- macros y constantes
#define LIMITE_51622 51722
#define FACTOR_51622 3

int aplicar_limite51622(int valor) {
    if (valor > LIMITE_51622) return LIMITE_51622;
    return valor * FACTOR_51622;
}
