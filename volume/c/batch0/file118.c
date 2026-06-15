// fichero 118 -- macros y constantes -- MODIFICADO
#define LIMITE_118 318
#define FACTOR_118 5

int aplicar_limite118(int valor) {
    if (valor > LIMITE_118) return LIMITE_118;
    return valor * FACTOR_118;
}
