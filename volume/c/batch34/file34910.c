// fichero 34910 -- macros y constantes -- MODIFICADO
#define LIMITE_34910 35110
#define FACTOR_34910 2

int aplicar_limite34910(int valor) {
    if (valor > LIMITE_34910) return LIMITE_34910;
    return valor * FACTOR_34910;
}
