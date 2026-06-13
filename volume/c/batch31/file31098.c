// fichero 31098 -- macros y constantes
#define LIMITE_31098 31198
#define FACTOR_31098 4

int aplicar_limite31098(int valor) {
    if (valor > LIMITE_31098) return LIMITE_31098;
    return valor * FACTOR_31098;
}
