// fichero 9502 -- macros y constantes -- MODIFICADO
#define LIMITE_9502 9702
#define FACTOR_9502 4

int aplicar_limite9502(int valor) {
    if (valor > LIMITE_9502) return LIMITE_9502;
    return valor * FACTOR_9502;
}
