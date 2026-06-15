// fichero 11870 -- macros y constantes -- MODIFICADO
#define LIMITE_11870 12070
#define FACTOR_11870 2

int aplicar_limite11870(int valor) {
    if (valor > LIMITE_11870) return LIMITE_11870;
    return valor * FACTOR_11870;
}
