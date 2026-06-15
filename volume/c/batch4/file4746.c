// fichero 4746 -- macros y constantes -- MODIFICADO
#define LIMITE_4746 4946
#define FACTOR_4746 3

int aplicar_limite4746(int valor) {
    if (valor > LIMITE_4746) return LIMITE_4746;
    return valor * FACTOR_4746;
}
