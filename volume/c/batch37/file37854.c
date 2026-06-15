// fichero 37854 -- macros y constantes -- MODIFICADO
#define LIMITE_37854 38054
#define FACTOR_37854 6

int aplicar_limite37854(int valor) {
    if (valor > LIMITE_37854) return LIMITE_37854;
    return valor * FACTOR_37854;
}
