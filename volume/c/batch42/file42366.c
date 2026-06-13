// fichero 42366 -- macros y constantes
#define LIMITE_42366 42466
#define FACTOR_42366 2

int aplicar_limite42366(int valor) {
    if (valor > LIMITE_42366) return LIMITE_42366;
    return valor * FACTOR_42366;
}
