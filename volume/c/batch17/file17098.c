// fichero 17098 -- macros y constantes
#define LIMITE_17098 17198
#define FACTOR_17098 4

int aplicar_limite17098(int valor) {
    if (valor > LIMITE_17098) return LIMITE_17098;
    return valor * FACTOR_17098;
}
