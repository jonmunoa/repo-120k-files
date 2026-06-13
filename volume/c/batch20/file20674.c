// fichero 20674 -- macros y constantes
#define LIMITE_20674 20774
#define FACTOR_20674 5

int aplicar_limite20674(int valor) {
    if (valor > LIMITE_20674) return LIMITE_20674;
    return valor * FACTOR_20674;
}
