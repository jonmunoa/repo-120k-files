// fichero 15434 -- macros y constantes -- MODIFICADO
#define LIMITE_15434 15634
#define FACTOR_15434 6

int aplicar_limite15434(int valor) {
    if (valor > LIMITE_15434) return LIMITE_15434;
    return valor * FACTOR_15434;
}
