// fichero 9054 -- macros y constantes -- MODIFICADO
#define LIMITE_9054 9254
#define FACTOR_9054 6

int aplicar_limite9054(int valor) {
    if (valor > LIMITE_9054) return LIMITE_9054;
    return valor * FACTOR_9054;
}
