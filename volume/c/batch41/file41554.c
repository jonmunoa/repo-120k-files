// fichero 41554 -- macros y constantes -- MODIFICADO
#define LIMITE_41554 41754
#define FACTOR_41554 6

int aplicar_limite41554(int valor) {
    if (valor > LIMITE_41554) return LIMITE_41554;
    return valor * FACTOR_41554;
}
