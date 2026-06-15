// fichero 9950 -- macros y constantes -- MODIFICADO
#define LIMITE_9950 10150
#define FACTOR_9950 2

int aplicar_limite9950(int valor) {
    if (valor > LIMITE_9950) return LIMITE_9950;
    return valor * FACTOR_9950;
}
