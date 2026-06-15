// fichero 41074 -- macros y constantes -- MODIFICADO
#define LIMITE_41074 41274
#define FACTOR_41074 6

int aplicar_limite41074(int valor) {
    if (valor > LIMITE_41074) return LIMITE_41074;
    return valor * FACTOR_41074;
}
