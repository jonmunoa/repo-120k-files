// fichero 41746 -- macros y constantes -- MODIFICADO
#define LIMITE_41746 41946
#define FACTOR_41746 3

int aplicar_limite41746(int valor) {
    if (valor > LIMITE_41746) return LIMITE_41746;
    return valor * FACTOR_41746;
}
