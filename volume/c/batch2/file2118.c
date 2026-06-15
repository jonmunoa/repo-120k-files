// fichero 2118 -- macros y constantes -- MODIFICADO
#define LIMITE_2118 2318
#define FACTOR_2118 5

int aplicar_limite2118(int valor) {
    if (valor > LIMITE_2118) return LIMITE_2118;
    return valor * FACTOR_2118;
}
