// fichero 30898 -- macros y constantes
#define LIMITE_30898 30998
#define FACTOR_30898 4

int aplicar_limite30898(int valor) {
    if (valor > LIMITE_30898) return LIMITE_30898;
    return valor * FACTOR_30898;
}
