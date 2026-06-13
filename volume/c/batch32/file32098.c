// fichero 32098 -- macros y constantes
#define LIMITE_32098 32198
#define FACTOR_32098 4

int aplicar_limite32098(int valor) {
    if (valor > LIMITE_32098) return LIMITE_32098;
    return valor * FACTOR_32098;
}
