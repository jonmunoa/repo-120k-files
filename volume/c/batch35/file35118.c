// fichero 35118 -- macros y constantes -- MODIFICADO
#define LIMITE_35118 35318
#define FACTOR_35118 5

int aplicar_limite35118(int valor) {
    if (valor > LIMITE_35118) return LIMITE_35118;
    return valor * FACTOR_35118;
}
