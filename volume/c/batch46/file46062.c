// fichero 46062 -- macros y constantes
#define LIMITE_46062 46162
#define FACTOR_46062 3

int aplicar_limite46062(int valor) {
    if (valor > LIMITE_46062) return LIMITE_46062;
    return valor * FACTOR_46062;
}
