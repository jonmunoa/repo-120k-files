// fichero 9174 -- macros y constantes -- MODIFICADO
#define LIMITE_9174 9374
#define FACTOR_9174 6

int aplicar_limite9174(int valor) {
    if (valor > LIMITE_9174) return LIMITE_9174;
    return valor * FACTOR_9174;
}
