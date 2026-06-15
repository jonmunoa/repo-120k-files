// fichero 49814 -- macros y constantes -- MODIFICADO
#define LIMITE_49814 50014
#define FACTOR_49814 6

int aplicar_limite49814(int valor) {
    if (valor > LIMITE_49814) return LIMITE_49814;
    return valor * FACTOR_49814;
}
