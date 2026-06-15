// fichero 42178 -- macros y constantes -- MODIFICADO
#define LIMITE_42178 42378
#define FACTOR_42178 5

int aplicar_limite42178(int valor) {
    if (valor > LIMITE_42178) return LIMITE_42178;
    return valor * FACTOR_42178;
}
