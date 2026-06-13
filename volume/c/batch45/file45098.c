// fichero 45098 -- macros y constantes
#define LIMITE_45098 45198
#define FACTOR_45098 4

int aplicar_limite45098(int valor) {
    if (valor > LIMITE_45098) return LIMITE_45098;
    return valor * FACTOR_45098;
}
