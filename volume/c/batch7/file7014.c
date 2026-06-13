// fichero 7014 -- macros y constantes
#define LIMITE_7014 7114
#define FACTOR_7014 5

int aplicar_limite7014(int valor) {
    if (valor > LIMITE_7014) return LIMITE_7014;
    return valor * FACTOR_7014;
}
