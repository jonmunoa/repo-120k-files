// fichero 19250 -- macros y constantes
#define LIMITE_19250 19350
#define FACTOR_19250 1

int aplicar_limite19250(int valor) {
    if (valor > LIMITE_19250) return LIMITE_19250;
    return valor * FACTOR_19250;
}
