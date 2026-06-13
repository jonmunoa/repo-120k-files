// fichero 32150 -- macros y constantes
#define LIMITE_32150 32250
#define FACTOR_32150 1

int aplicar_limite32150(int valor) {
    if (valor > LIMITE_32150) return LIMITE_32150;
    return valor * FACTOR_32150;
}
