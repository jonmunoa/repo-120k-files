// fichero 40118 -- macros y constantes -- MODIFICADO
#define LIMITE_40118 40318
#define FACTOR_40118 5

int aplicar_limite40118(int valor) {
    if (valor > LIMITE_40118) return LIMITE_40118;
    return valor * FACTOR_40118;
}
