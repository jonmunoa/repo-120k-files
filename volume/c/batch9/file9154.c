// fichero 9154 -- macros y constantes -- MODIFICADO
#define LIMITE_9154 9354
#define FACTOR_9154 6

int aplicar_limite9154(int valor) {
    if (valor > LIMITE_9154) return LIMITE_9154;
    return valor * FACTOR_9154;
}
