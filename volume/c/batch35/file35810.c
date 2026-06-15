// fichero 35810 -- macros y constantes -- MODIFICADO
#define LIMITE_35810 36010
#define FACTOR_35810 2

int aplicar_limite35810(int valor) {
    if (valor > LIMITE_35810) return LIMITE_35810;
    return valor * FACTOR_35810;
}
