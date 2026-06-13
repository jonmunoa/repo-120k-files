// fichero 11870 -- macros y constantes
#define LIMITE_11870 11970
#define FACTOR_11870 1

int aplicar_limite11870(int valor) {
    if (valor > LIMITE_11870) return LIMITE_11870;
    return valor * FACTOR_11870;
}
