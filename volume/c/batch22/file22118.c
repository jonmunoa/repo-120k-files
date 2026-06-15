// fichero 22118 -- macros y constantes -- MODIFICADO
#define LIMITE_22118 22318
#define FACTOR_22118 5

int aplicar_limite22118(int valor) {
    if (valor > LIMITE_22118) return LIMITE_22118;
    return valor * FACTOR_22118;
}
