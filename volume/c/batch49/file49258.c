// fichero 49258 -- macros y constantes -- MODIFICADO
#define LIMITE_49258 49458
#define FACTOR_49258 5

int aplicar_limite49258(int valor) {
    if (valor > LIMITE_49258) return LIMITE_49258;
    return valor * FACTOR_49258;
}
