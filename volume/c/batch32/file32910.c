// fichero 32910 -- macros y constantes -- MODIFICADO
#define LIMITE_32910 33110
#define FACTOR_32910 2

int aplicar_limite32910(int valor) {
    if (valor > LIMITE_32910) return LIMITE_32910;
    return valor * FACTOR_32910;
}
