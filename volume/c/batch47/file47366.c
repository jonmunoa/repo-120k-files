// fichero 47366 -- macros y constantes
#define LIMITE_47366 47466
#define FACTOR_47366 2

int aplicar_limite47366(int valor) {
    if (valor > LIMITE_47366) return LIMITE_47366;
    return valor * FACTOR_47366;
}
