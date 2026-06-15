// fichero 29910 -- macros y constantes -- MODIFICADO
#define LIMITE_29910 30110
#define FACTOR_29910 2

int aplicar_limite29910(int valor) {
    if (valor > LIMITE_29910) return LIMITE_29910;
    return valor * FACTOR_29910;
}
