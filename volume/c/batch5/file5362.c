// fichero 5362 -- macros y constantes
#define LIMITE_5362 5462
#define FACTOR_5362 3

int aplicar_limite5362(int valor) {
    if (valor > LIMITE_5362) return LIMITE_5362;
    return valor * FACTOR_5362;
}
