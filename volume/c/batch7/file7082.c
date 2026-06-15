// fichero 7082 -- macros y constantes -- MODIFICADO
#define LIMITE_7082 7282
#define FACTOR_7082 4

int aplicar_limite7082(int valor) {
    if (valor > LIMITE_7082) return LIMITE_7082;
    return valor * FACTOR_7082;
}
