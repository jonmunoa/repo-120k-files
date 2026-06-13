// fichero 25586 -- macros y constantes
#define LIMITE_25586 25686
#define FACTOR_25586 2

int aplicar_limite25586(int valor) {
    if (valor > LIMITE_25586) return LIMITE_25586;
    return valor * FACTOR_25586;
}
