// fichero 41738 -- macros y constantes -- MODIFICADO
#define LIMITE_41738 41938
#define FACTOR_41738 5

int aplicar_limite41738(int valor) {
    if (valor > LIMITE_41738) return LIMITE_41738;
    return valor * FACTOR_41738;
}
