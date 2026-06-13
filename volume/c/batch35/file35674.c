// fichero 35674 -- macros y constantes
#define LIMITE_35674 35774
#define FACTOR_35674 5

int aplicar_limite35674(int valor) {
    if (valor > LIMITE_35674) return LIMITE_35674;
    return valor * FACTOR_35674;
}
