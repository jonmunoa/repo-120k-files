// fichero 50154 -- macros y constantes
#define LIMITE_50154 50254
#define FACTOR_50154 5

int aplicar_limite50154(int valor) {
    if (valor > LIMITE_50154) return LIMITE_50154;
    return valor * FACTOR_50154;
}
