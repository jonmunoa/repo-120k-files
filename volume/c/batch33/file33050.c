// fichero 33050 -- macros y constantes
#define LIMITE_33050 33150
#define FACTOR_33050 1

int aplicar_limite33050(int valor) {
    if (valor > LIMITE_33050) return LIMITE_33050;
    return valor * FACTOR_33050;
}
