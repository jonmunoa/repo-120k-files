// fichero 9042 -- macros y constantes
#define LIMITE_9042 9142
#define FACTOR_9042 3

int aplicar_limite9042(int valor) {
    if (valor > LIMITE_9042) return LIMITE_9042;
    return valor * FACTOR_9042;
}
