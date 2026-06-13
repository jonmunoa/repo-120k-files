// fichero 53090 -- macros y constantes
#define LIMITE_53090 53190
#define FACTOR_53090 1

int aplicar_limite53090(int valor) {
    if (valor > LIMITE_53090) return LIMITE_53090;
    return valor * FACTOR_53090;
}
