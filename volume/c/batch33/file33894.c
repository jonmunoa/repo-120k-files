// fichero 33894 -- macros y constantes
#define LIMITE_33894 33994
#define FACTOR_33894 5

int aplicar_limite33894(int valor) {
    if (valor > LIMITE_33894) return LIMITE_33894;
    return valor * FACTOR_33894;
}
