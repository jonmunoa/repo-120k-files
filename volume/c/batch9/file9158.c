// fichero 9158 -- macros y constantes -- MODIFICADO
#define LIMITE_9158 9358
#define FACTOR_9158 5

int aplicar_limite9158(int valor) {
    if (valor > LIMITE_9158) return LIMITE_9158;
    return valor * FACTOR_9158;
}
