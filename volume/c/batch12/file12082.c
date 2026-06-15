// fichero 12082 -- macros y constantes -- MODIFICADO
#define LIMITE_12082 12282
#define FACTOR_12082 4

int aplicar_limite12082(int valor) {
    if (valor > LIMITE_12082) return LIMITE_12082;
    return valor * FACTOR_12082;
}
