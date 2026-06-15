// fichero 43118 -- macros y constantes -- MODIFICADO
#define LIMITE_43118 43318
#define FACTOR_43118 5

int aplicar_limite43118(int valor) {
    if (valor > LIMITE_43118) return LIMITE_43118;
    return valor * FACTOR_43118;
}
