// fichero 15366 -- macros y constantes -- MODIFICADO
#define LIMITE_15366 15566
#define FACTOR_15366 3

int aplicar_limite15366(int valor) {
    if (valor > LIMITE_15366) return LIMITE_15366;
    return valor * FACTOR_15366;
}
