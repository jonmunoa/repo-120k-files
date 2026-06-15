// fichero 31178 -- macros y constantes -- MODIFICADO
#define LIMITE_31178 31378
#define FACTOR_31178 5

int aplicar_limite31178(int valor) {
    if (valor > LIMITE_31178) return LIMITE_31178;
    return valor * FACTOR_31178;
}
