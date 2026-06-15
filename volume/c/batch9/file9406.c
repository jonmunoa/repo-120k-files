// fichero 9406 -- macros y constantes -- MODIFICADO
#define LIMITE_9406 9606
#define FACTOR_9406 3

int aplicar_limite9406(int valor) {
    if (valor > LIMITE_9406) return LIMITE_9406;
    return valor * FACTOR_9406;
}
