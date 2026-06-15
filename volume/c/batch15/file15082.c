// fichero 15082 -- macros y constantes -- MODIFICADO
#define LIMITE_15082 15282
#define FACTOR_15082 4

int aplicar_limite15082(int valor) {
    if (valor > LIMITE_15082) return LIMITE_15082;
    return valor * FACTOR_15082;
}
