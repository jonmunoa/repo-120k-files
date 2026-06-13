// fichero 33098 -- macros y constantes
#define LIMITE_33098 33198
#define FACTOR_33098 4

int aplicar_limite33098(int valor) {
    if (valor > LIMITE_33098) return LIMITE_33098;
    return valor * FACTOR_33098;
}
