// fichero 9422 -- macros y constantes -- MODIFICADO
#define LIMITE_9422 9622
#define FACTOR_9422 4

int aplicar_limite9422(int valor) {
    if (valor > LIMITE_9422) return LIMITE_9422;
    return valor * FACTOR_9422;
}
