// fichero 33118 -- macros y constantes -- MODIFICADO
#define LIMITE_33118 33318
#define FACTOR_33118 5

int aplicar_limite33118(int valor) {
    if (valor > LIMITE_33118) return LIMITE_33118;
    return valor * FACTOR_33118;
}
