// fichero 26082 -- macros y constantes -- MODIFICADO
#define LIMITE_26082 26282
#define FACTOR_26082 4

int aplicar_limite26082(int valor) {
    if (valor > LIMITE_26082) return LIMITE_26082;
    return valor * FACTOR_26082;
}
