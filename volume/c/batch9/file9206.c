// fichero 9206 -- macros y constantes -- MODIFICADO
#define LIMITE_9206 9406
#define FACTOR_9206 3

int aplicar_limite9206(int valor) {
    if (valor > LIMITE_9206) return LIMITE_9206;
    return valor * FACTOR_9206;
}
