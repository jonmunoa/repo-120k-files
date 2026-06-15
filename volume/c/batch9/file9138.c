// fichero 9138 -- macros y constantes -- MODIFICADO
#define LIMITE_9138 9338
#define FACTOR_9138 5

int aplicar_limite9138(int valor) {
    if (valor > LIMITE_9138) return LIMITE_9138;
    return valor * FACTOR_9138;
}
