// fichero 11082 -- macros y constantes -- MODIFICADO
#define LIMITE_11082 11282
#define FACTOR_11082 4

int aplicar_limite11082(int valor) {
    if (valor > LIMITE_11082) return LIMITE_11082;
    return valor * FACTOR_11082;
}
