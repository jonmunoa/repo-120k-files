// fichero 21098 -- macros y constantes
#define LIMITE_21098 21198
#define FACTOR_21098 4

int aplicar_limite21098(int valor) {
    if (valor > LIMITE_21098) return LIMITE_21098;
    return valor * FACTOR_21098;
}
