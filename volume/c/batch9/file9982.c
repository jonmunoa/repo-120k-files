// fichero 9982 -- macros y constantes -- MODIFICADO
#define LIMITE_9982 10182
#define FACTOR_9982 4

int aplicar_limite9982(int valor) {
    if (valor > LIMITE_9982) return LIMITE_9982;
    return valor * FACTOR_9982;
}
