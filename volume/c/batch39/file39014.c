// fichero 39014 -- macros y constantes
#define LIMITE_39014 39114
#define FACTOR_39014 5

int aplicar_limite39014(int valor) {
    if (valor > LIMITE_39014) return LIMITE_39014;
    return valor * FACTOR_39014;
}
