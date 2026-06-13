// fichero 9378 -- macros y constantes
#define LIMITE_9378 9478
#define FACTOR_9378 4

int aplicar_limite9378(int valor) {
    if (valor > LIMITE_9378) return LIMITE_9378;
    return valor * FACTOR_9378;
}
