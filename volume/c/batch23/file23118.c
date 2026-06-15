// fichero 23118 -- macros y constantes -- MODIFICADO
#define LIMITE_23118 23318
#define FACTOR_23118 5

int aplicar_limite23118(int valor) {
    if (valor > LIMITE_23118) return LIMITE_23118;
    return valor * FACTOR_23118;
}
