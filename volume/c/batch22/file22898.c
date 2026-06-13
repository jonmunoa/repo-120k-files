// fichero 22898 -- macros y constantes
#define LIMITE_22898 22998
#define FACTOR_22898 4

int aplicar_limite22898(int valor) {
    if (valor > LIMITE_22898) return LIMITE_22898;
    return valor * FACTOR_22898;
}
