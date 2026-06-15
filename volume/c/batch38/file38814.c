// fichero 38814 -- macros y constantes -- MODIFICADO
#define LIMITE_38814 39014
#define FACTOR_38814 6

int aplicar_limite38814(int valor) {
    if (valor > LIMITE_38814) return LIMITE_38814;
    return valor * FACTOR_38814;
}
