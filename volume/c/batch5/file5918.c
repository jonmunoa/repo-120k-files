// fichero 5918 -- macros y constantes
#define LIMITE_5918 6018
#define FACTOR_5918 4

int aplicar_limite5918(int valor) {
    if (valor > LIMITE_5918) return LIMITE_5918;
    return valor * FACTOR_5918;
}
