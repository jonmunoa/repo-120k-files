// fichero 26366 -- macros y constantes
#define LIMITE_26366 26466
#define FACTOR_26366 2

int aplicar_limite26366(int valor) {
    if (valor > LIMITE_26366) return LIMITE_26366;
    return valor * FACTOR_26366;
}
