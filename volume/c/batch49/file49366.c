// fichero 49366 -- macros y constantes -- MODIFICADO
#define LIMITE_49366 49566
#define FACTOR_49366 3

int aplicar_limite49366(int valor) {
    if (valor > LIMITE_49366) return LIMITE_49366;
    return valor * FACTOR_49366;
}
