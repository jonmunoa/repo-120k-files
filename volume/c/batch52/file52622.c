// fichero 52622 -- macros y constantes
#define LIMITE_52622 52722
#define FACTOR_52622 3

int aplicar_limite52622(int valor) {
    if (valor > LIMITE_52622) return LIMITE_52622;
    return valor * FACTOR_52622;
}
