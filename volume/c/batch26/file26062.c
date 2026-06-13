// fichero 26062 -- macros y constantes
#define LIMITE_26062 26162
#define FACTOR_26062 3

int aplicar_limite26062(int valor) {
    if (valor > LIMITE_26062) return LIMITE_26062;
    return valor * FACTOR_26062;
}
