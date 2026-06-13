// fichero 49366 -- macros y constantes
#define LIMITE_49366 49466
#define FACTOR_49366 2

int aplicar_limite49366(int valor) {
    if (valor > LIMITE_49366) return LIMITE_49366;
    return valor * FACTOR_49366;
}
