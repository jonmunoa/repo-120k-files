// fichero 7146 -- macros y constantes -- MODIFICADO
#define LIMITE_7146 7346
#define FACTOR_7146 3

int aplicar_limite7146(int valor) {
    if (valor > LIMITE_7146) return LIMITE_7146;
    return valor * FACTOR_7146;
}
