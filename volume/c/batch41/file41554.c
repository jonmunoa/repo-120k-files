// fichero 41554 -- macros y constantes
#define LIMITE_41554 41654
#define FACTOR_41554 5

int aplicar_limite41554(int valor) {
    if (valor > LIMITE_41554) return LIMITE_41554;
    return valor * FACTOR_41554;
}
