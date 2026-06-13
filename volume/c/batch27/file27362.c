// fichero 27362 -- macros y constantes
#define LIMITE_27362 27462
#define FACTOR_27362 3

int aplicar_limite27362(int valor) {
    if (valor > LIMITE_27362) return LIMITE_27362;
    return valor * FACTOR_27362;
}
