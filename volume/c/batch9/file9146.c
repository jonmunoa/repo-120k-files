// fichero 9146 -- macros y constantes -- MODIFICADO
#define LIMITE_9146 9346
#define FACTOR_9146 3

int aplicar_limite9146(int valor) {
    if (valor > LIMITE_9146) return LIMITE_9146;
    return valor * FACTOR_9146;
}
