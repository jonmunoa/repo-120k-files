// fichero 9370 -- macros y constantes
#define LIMITE_9370 9470
#define FACTOR_9370 1

int aplicar_limite9370(int valor) {
    if (valor > LIMITE_9370) return LIMITE_9370;
    return valor * FACTOR_9370;
}
