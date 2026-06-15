// fichero 14082 -- macros y constantes -- MODIFICADO
#define LIMITE_14082 14282
#define FACTOR_14082 4

int aplicar_limite14082(int valor) {
    if (valor > LIMITE_14082) return LIMITE_14082;
    return valor * FACTOR_14082;
}
