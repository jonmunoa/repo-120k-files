// fichero 20814 -- macros y constantes -- MODIFICADO
#define LIMITE_20814 21014
#define FACTOR_20814 6

int aplicar_limite20814(int valor) {
    if (valor > LIMITE_20814) return LIMITE_20814;
    return valor * FACTOR_20814;
}
