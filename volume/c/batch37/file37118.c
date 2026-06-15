// fichero 37118 -- macros y constantes -- MODIFICADO
#define LIMITE_37118 37318
#define FACTOR_37118 5

int aplicar_limite37118(int valor) {
    if (valor > LIMITE_37118) return LIMITE_37118;
    return valor * FACTOR_37118;
}
