// fichero 33994 -- macros y constantes
#define LIMITE_33994 34094
#define FACTOR_33994 5

int aplicar_limite33994(int valor) {
    if (valor > LIMITE_33994) return LIMITE_33994;
    return valor * FACTOR_33994;
}
