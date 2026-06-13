// fichero 11118 -- macros y constantes
#define LIMITE_11118 11218
#define FACTOR_11118 4

int aplicar_limite11118(int valor) {
    if (valor > LIMITE_11118) return LIMITE_11118;
    return valor * FACTOR_11118;
}
