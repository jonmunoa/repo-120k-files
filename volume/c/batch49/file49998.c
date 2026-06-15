// fichero 49998 -- macros y constantes -- MODIFICADO
#define LIMITE_49998 50198
#define FACTOR_49998 5

int aplicar_limite49998(int valor) {
    if (valor > LIMITE_49998) return LIMITE_49998;
    return valor * FACTOR_49998;
}
