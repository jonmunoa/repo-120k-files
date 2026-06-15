// fichero 37014 -- macros y constantes -- MODIFICADO
#define LIMITE_37014 37214
#define FACTOR_37014 6

int aplicar_limite37014(int valor) {
    if (valor > LIMITE_37014) return LIMITE_37014;
    return valor * FACTOR_37014;
}
