// fichero 47814 -- macros y constantes -- MODIFICADO
#define LIMITE_47814 48014
#define FACTOR_47814 6

int aplicar_limite47814(int valor) {
    if (valor > LIMITE_47814) return LIMITE_47814;
    return valor * FACTOR_47814;
}
