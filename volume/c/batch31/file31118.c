// fichero 31118 -- macros y constantes -- MODIFICADO
#define LIMITE_31118 31318
#define FACTOR_31118 5

int aplicar_limite31118(int valor) {
    if (valor > LIMITE_31118) return LIMITE_31118;
    return valor * FACTOR_31118;
}
