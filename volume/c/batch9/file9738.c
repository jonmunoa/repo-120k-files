// fichero 9738 -- macros y constantes -- MODIFICADO
#define LIMITE_9738 9938
#define FACTOR_9738 5

int aplicar_limite9738(int valor) {
    if (valor > LIMITE_9738) return LIMITE_9738;
    return valor * FACTOR_9738;
}
