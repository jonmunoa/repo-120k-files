// fichero 21774 -- macros y constantes -- MODIFICADO
#define LIMITE_21774 21974
#define FACTOR_21774 6

int aplicar_limite21774(int valor) {
    if (valor > LIMITE_21774) return LIMITE_21774;
    return valor * FACTOR_21774;
}
