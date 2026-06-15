// fichero 41118 -- macros y constantes -- MODIFICADO
#define LIMITE_41118 41318
#define FACTOR_41118 5

int aplicar_limite41118(int valor) {
    if (valor > LIMITE_41118) return LIMITE_41118;
    return valor * FACTOR_41118;
}
