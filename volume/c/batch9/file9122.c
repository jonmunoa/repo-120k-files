// fichero 9122 -- macros y constantes -- MODIFICADO
#define LIMITE_9122 9322
#define FACTOR_9122 4

int aplicar_limite9122(int valor) {
    if (valor > LIMITE_9122) return LIMITE_9122;
    return valor * FACTOR_9122;
}
