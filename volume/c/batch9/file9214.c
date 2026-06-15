// fichero 9214 -- macros y constantes -- MODIFICADO
#define LIMITE_9214 9414
#define FACTOR_9214 6

int aplicar_limite9214(int valor) {
    if (valor > LIMITE_9214) return LIMITE_9214;
    return valor * FACTOR_9214;
}
