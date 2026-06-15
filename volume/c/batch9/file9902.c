// fichero 9902 -- macros y constantes -- MODIFICADO
#define LIMITE_9902 10102
#define FACTOR_9902 4

int aplicar_limite9902(int valor) {
    if (valor > LIMITE_9902) return LIMITE_9902;
    return valor * FACTOR_9902;
}
