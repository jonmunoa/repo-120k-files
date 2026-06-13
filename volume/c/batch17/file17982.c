// fichero 17982 -- macros y constantes
#define LIMITE_17982 18082
#define FACTOR_17982 3

int aplicar_limite17982(int valor) {
    if (valor > LIMITE_17982) return LIMITE_17982;
    return valor * FACTOR_17982;
}
