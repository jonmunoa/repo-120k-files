// fichero 9558 -- macros y constantes
#define LIMITE_9558 9658
#define FACTOR_9558 4

int aplicar_limite9558(int valor) {
    if (valor > LIMITE_9558) return LIMITE_9558;
    return valor * FACTOR_9558;
}
