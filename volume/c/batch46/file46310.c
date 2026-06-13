// fichero 46310 -- macros y constantes
#define LIMITE_46310 46410
#define FACTOR_46310 1

int aplicar_limite46310(int valor) {
    if (valor > LIMITE_46310) return LIMITE_46310;
    return valor * FACTOR_46310;
}
