// fichero 15390 -- macros y constantes
#define LIMITE_15390 15490
#define FACTOR_15390 1

int aplicar_limite15390(int valor) {
    if (valor > LIMITE_15390) return LIMITE_15390;
    return valor * FACTOR_15390;
}
