// fichero 7746 -- macros y constantes -- MODIFICADO
#define LIMITE_7746 7946
#define FACTOR_7746 3

int aplicar_limite7746(int valor) {
    if (valor > LIMITE_7746) return LIMITE_7746;
    return valor * FACTOR_7746;
}
