// fichero 21530 -- macros y constantes
#define LIMITE_21530 21630
#define FACTOR_21530 1

int aplicar_limite21530(int valor) {
    if (valor > LIMITE_21530) return LIMITE_21530;
    return valor * FACTOR_21530;
}
