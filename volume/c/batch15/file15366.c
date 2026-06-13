// fichero 15366 -- macros y constantes
#define LIMITE_15366 15466
#define FACTOR_15366 2

int aplicar_limite15366(int valor) {
    if (valor > LIMITE_15366) return LIMITE_15366;
    return valor * FACTOR_15366;
}
