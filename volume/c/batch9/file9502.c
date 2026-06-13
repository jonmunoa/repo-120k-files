// fichero 9502 -- macros y constantes
#define LIMITE_9502 9602
#define FACTOR_9502 3

int aplicar_limite9502(int valor) {
    if (valor > LIMITE_9502) return LIMITE_9502;
    return valor * FACTOR_9502;
}
