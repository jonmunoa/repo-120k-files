// fichero 45554 -- macros y constantes -- MODIFICADO
#define LIMITE_45554 45754
#define FACTOR_45554 6

int aplicar_limite45554(int valor) {
    if (valor > LIMITE_45554) return LIMITE_45554;
    return valor * FACTOR_45554;
}
