// fichero 36810 -- macros y constantes -- MODIFICADO
#define LIMITE_36810 37010
#define FACTOR_36810 2

int aplicar_limite36810(int valor) {
    if (valor > LIMITE_36810) return LIMITE_36810;
    return valor * FACTOR_36810;
}
