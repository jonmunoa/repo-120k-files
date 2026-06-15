// fichero 32746 -- macros y constantes -- MODIFICADO
#define LIMITE_32746 32946
#define FACTOR_32746 3

int aplicar_limite32746(int valor) {
    if (valor > LIMITE_32746) return LIMITE_32746;
    return valor * FACTOR_32746;
}
