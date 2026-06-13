// fichero 53130 -- macros y constantes
#define LIMITE_53130 53230
#define FACTOR_53130 1

int aplicar_limite53130(int valor) {
    if (valor > LIMITE_53130) return LIMITE_53130;
    return valor * FACTOR_53130;
}
