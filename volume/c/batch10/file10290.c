// fichero 10290 -- macros y constantes
#define LIMITE_10290 10390
#define FACTOR_10290 1

int aplicar_limite10290(int valor) {
    if (valor > LIMITE_10290) return LIMITE_10290;
    return valor * FACTOR_10290;
}
