// fichero 36118 -- macros y constantes -- MODIFICADO
#define LIMITE_36118 36318
#define FACTOR_36118 5

int aplicar_limite36118(int valor) {
    if (valor > LIMITE_36118) return LIMITE_36118;
    return valor * FACTOR_36118;
}
