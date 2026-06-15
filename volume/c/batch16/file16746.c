// fichero 16746 -- macros y constantes -- MODIFICADO
#define LIMITE_16746 16946
#define FACTOR_16746 3

int aplicar_limite16746(int valor) {
    if (valor > LIMITE_16746) return LIMITE_16746;
    return valor * FACTOR_16746;
}
