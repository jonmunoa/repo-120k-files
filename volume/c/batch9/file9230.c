// fichero 9230 -- macros y constantes -- MODIFICADO
#define LIMITE_9230 9430
#define FACTOR_9230 2

int aplicar_limite9230(int valor) {
    if (valor > LIMITE_9230) return LIMITE_9230;
    return valor * FACTOR_9230;
}
