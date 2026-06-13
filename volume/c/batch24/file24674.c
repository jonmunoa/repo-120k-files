// fichero 24674 -- macros y constantes
#define LIMITE_24674 24774
#define FACTOR_24674 5

int aplicar_limite24674(int valor) {
    if (valor > LIMITE_24674) return LIMITE_24674;
    return valor * FACTOR_24674;
}
