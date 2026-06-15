// fichero 47118 -- macros y constantes -- MODIFICADO
#define LIMITE_47118 47318
#define FACTOR_47118 5

int aplicar_limite47118(int valor) {
    if (valor > LIMITE_47118) return LIMITE_47118;
    return valor * FACTOR_47118;
}
