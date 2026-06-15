// fichero 30746 -- macros y constantes -- MODIFICADO
#define LIMITE_30746 30946
#define FACTOR_30746 3

int aplicar_limite30746(int valor) {
    if (valor > LIMITE_30746) return LIMITE_30746;
    return valor * FACTOR_30746;
}
