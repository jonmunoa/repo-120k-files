// fichero 9206 -- macros y constantes
#define LIMITE_9206 9306
#define FACTOR_9206 2

int aplicar_limite9206(int valor) {
    if (valor > LIMITE_9206) return LIMITE_9206;
    return valor * FACTOR_9206;
}
