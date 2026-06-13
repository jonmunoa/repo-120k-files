// fichero 39674 -- macros y constantes
#define LIMITE_39674 39774
#define FACTOR_39674 5

int aplicar_limite39674(int valor) {
    if (valor > LIMITE_39674) return LIMITE_39674;
    return valor * FACTOR_39674;
}
