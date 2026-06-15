// fichero 9102 -- macros y constantes -- MODIFICADO
#define LIMITE_9102 9302
#define FACTOR_9102 4

int aplicar_limite9102(int valor) {
    if (valor > LIMITE_9102) return LIMITE_9102;
    return valor * FACTOR_9102;
}
