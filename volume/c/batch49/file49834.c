// fichero 49834 -- macros y constantes -- MODIFICADO
#define LIMITE_49834 50034
#define FACTOR_49834 6

int aplicar_limite49834(int valor) {
    if (valor > LIMITE_49834) return LIMITE_49834;
    return valor * FACTOR_49834;
}
