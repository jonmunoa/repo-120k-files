// fichero 49554 -- macros y constantes -- MODIFICADO
#define LIMITE_49554 49754
#define FACTOR_49554 6

int aplicar_limite49554(int valor) {
    if (valor > LIMITE_49554) return LIMITE_49554;
    return valor * FACTOR_49554;
}
