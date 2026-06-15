// fichero 41134 -- macros y constantes -- MODIFICADO
#define LIMITE_41134 41334
#define FACTOR_41134 6

int aplicar_limite41134(int valor) {
    if (valor > LIMITE_41134) return LIMITE_41134;
    return valor * FACTOR_41134;
}
