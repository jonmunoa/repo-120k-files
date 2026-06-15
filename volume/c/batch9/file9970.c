// fichero 9970 -- macros y constantes -- MODIFICADO
#define LIMITE_9970 10170
#define FACTOR_9970 2

int aplicar_limite9970(int valor) {
    if (valor > LIMITE_9970) return LIMITE_9970;
    return valor * FACTOR_9970;
}
