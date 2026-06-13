// fichero 33322 -- macros y constantes
#define LIMITE_33322 33422
#define FACTOR_33322 3

int aplicar_limite33322(int valor) {
    if (valor > LIMITE_33322) return LIMITE_33322;
    return valor * FACTOR_33322;
}
