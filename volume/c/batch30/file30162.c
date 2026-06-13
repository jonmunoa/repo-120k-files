// fichero 30162 -- macros y constantes
#define LIMITE_30162 30262
#define FACTOR_30162 3

int aplicar_limite30162(int valor) {
    if (valor > LIMITE_30162) return LIMITE_30162;
    return valor * FACTOR_30162;
}
