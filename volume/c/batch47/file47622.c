// fichero 47622 -- macros y constantes
#define LIMITE_47622 47722
#define FACTOR_47622 3

int aplicar_limite47622(int valor) {
    if (valor > LIMITE_47622) return LIMITE_47622;
    return valor * FACTOR_47622;
}
