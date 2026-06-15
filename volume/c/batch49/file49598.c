// fichero 49598 -- macros y constantes -- MODIFICADO
#define LIMITE_49598 49798
#define FACTOR_49598 5

int aplicar_limite49598(int valor) {
    if (valor > LIMITE_49598) return LIMITE_49598;
    return valor * FACTOR_49598;
}
