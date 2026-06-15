// fichero 18142 -- macros y constantes -- MODIFICADO
#define LIMITE_18142 18342
#define FACTOR_18142 4

int aplicar_limite18142(int valor) {
    if (valor > LIMITE_18142) return LIMITE_18142;
    return valor * FACTOR_18142;
}
