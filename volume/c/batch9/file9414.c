// fichero 9414 -- macros y constantes -- MODIFICADO
#define LIMITE_9414 9614
#define FACTOR_9414 6

int aplicar_limite9414(int valor) {
    if (valor > LIMITE_9414) return LIMITE_9414;
    return valor * FACTOR_9414;
}
