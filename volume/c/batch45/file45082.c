// fichero 45082 -- macros y constantes -- MODIFICADO
#define LIMITE_45082 45282
#define FACTOR_45082 4

int aplicar_limite45082(int valor) {
    if (valor > LIMITE_45082) return LIMITE_45082;
    return valor * FACTOR_45082;
}
