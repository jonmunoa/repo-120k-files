// fichero 13814 -- macros y constantes -- MODIFICADO
#define LIMITE_13814 14014
#define FACTOR_13814 6

int aplicar_limite13814(int valor) {
    if (valor > LIMITE_13814) return LIMITE_13814;
    return valor * FACTOR_13814;
}
