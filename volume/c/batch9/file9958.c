// fichero 9958 -- macros y constantes
#define LIMITE_9958 10058
#define FACTOR_9958 4

int aplicar_limite9958(int valor) {
    if (valor > LIMITE_9958) return LIMITE_9958;
    return valor * FACTOR_9958;
}
