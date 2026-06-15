// fichero 36082 -- macros y constantes -- MODIFICADO
#define LIMITE_36082 36282
#define FACTOR_36082 4

int aplicar_limite36082(int valor) {
    if (valor > LIMITE_36082) return LIMITE_36082;
    return valor * FACTOR_36082;
}
