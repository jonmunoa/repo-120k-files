// fichero 13366 -- macros y constantes
#define LIMITE_13366 13466
#define FACTOR_13366 2

int aplicar_limite13366(int valor) {
    if (valor > LIMITE_13366) return LIMITE_13366;
    return valor * FACTOR_13366;
}
