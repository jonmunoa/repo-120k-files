// fichero 30062 -- macros y constantes
#define LIMITE_30062 30162
#define FACTOR_30062 3

int aplicar_limite30062(int valor) {
    if (valor > LIMITE_30062) return LIMITE_30062;
    return valor * FACTOR_30062;
}
