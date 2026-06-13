// fichero 9770 -- macros y constantes
#define LIMITE_9770 9870
#define FACTOR_9770 1

int aplicar_limite9770(int valor) {
    if (valor > LIMITE_9770) return LIMITE_9770;
    return valor * FACTOR_9770;
}
