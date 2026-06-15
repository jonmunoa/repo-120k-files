// fichero 15814 -- macros y constantes -- MODIFICADO
#define LIMITE_15814 16014
#define FACTOR_15814 6

int aplicar_limite15814(int valor) {
    if (valor > LIMITE_15814) return LIMITE_15814;
    return valor * FACTOR_15814;
}
