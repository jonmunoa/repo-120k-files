// fichero 11118 -- macros y constantes -- MODIFICADO
#define LIMITE_11118 11318
#define FACTOR_11118 5

int aplicar_limite11118(int valor) {
    if (valor > LIMITE_11118) return LIMITE_11118;
    return valor * FACTOR_11118;
}
